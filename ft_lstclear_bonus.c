/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:39:41 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:26:06 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = NULL;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current, del);
	}
}
// int	main(void)
// {
// 	t_list    *lst = ft_lstnew("Hello");
//     lst->next = ft_lstnew("World");

//     ft_lstclear(&lst, free);
//     if (!lst)
//         printf("List cleared successfully\n");
//     else
//         printf("Failed to clear the list\n");
//     return (0);
// }