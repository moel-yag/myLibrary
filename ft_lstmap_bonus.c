/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:36:40 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:27:43 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	current = lst->next;
	new_node = new_list;
	while (current)
	{
		new_node->next = ft_lstnew(f(current->content));
		if (!new_node->next)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = new_node->next;
		current = current->next;
	}
	return (new_list);
}

// int main(void)
// {
// 	t_list    *lst;
//     t_list    *new_lst;
//     int        data[3] = {1, 2, 3};
//     int        *new_data;

//     lst = ft_lstnew(data);
//     lst->next = ft_lstnew(data + 1);
//     lst->next->next = ft_lstnew(data + 2);

//     new_lst = ft_lstmap(lst, ft_itoa, free);
//     while (new_lst)
//     {
//         new_data = (int *)new_lst->content;
//         printf("%d\n", *new_data);
//         new_lst = new_lst->next;
//     }
//     ft_lstclear(&lst, free);
//     ft_lstclear(&new_lst, free);
//     return (0);
// }