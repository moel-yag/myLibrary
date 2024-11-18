/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:25:42 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:26:35 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content)
		del(lst->content);
	free(lst);
	lst = NULL;
}

// int	main(void)
// {
// 	t_list    *list;
//     int        data = 42;

//     list = ft_lstnew(&data);
//     ft_lstdelone(list, free);
//     return (0);
// }