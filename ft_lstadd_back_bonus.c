/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:22:21 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 10:25:29 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	current = *lst;
	if (!current)
		*lst = new;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	return ;
}

// int	main(void)
// {
// 	t_list    *one = ft_lstnew("one");
//     t_list    *two = ft_lstnew("two");
//     t_list    *three = NULL;

//     ft_lstadd_back(&three, two);
//     ft_lstadd_back(&three, one);
//     while (three)
//     {
//         printf("%s\n", three->content);
//         three = three->next;
//     }
//     return (0);
// }