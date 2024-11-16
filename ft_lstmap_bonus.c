/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:36:40 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/16 17:49:40 by moel-yag         ###   ########.fr       */
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
	ft_lstdelone(lst, del);
}
