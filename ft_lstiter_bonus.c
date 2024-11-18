/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:43:23 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:26:58 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list    *lst = ft_lstnew("Hello");
//     lst->next = ft_lstnew("World");

//     ft_lstiter(lst, ft_putstr);
//     ft_lstclear(&lst, free);
//     return (0);
// }