/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:00:33 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:27:21 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	if (!list || !list->next)
		return (list);
	while (list->next)
		list = list->next;
	return (list);
}

// int main(void)
// {
// 	t_list    *list;
//     int        data = 42;

//     list = ft_lstnew(&data);
//     ft_lstadd_back(&list, ft_lstnew(&data));
// }