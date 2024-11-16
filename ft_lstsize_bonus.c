/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:06:59 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/16 14:57:15 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsize(t_list **list, t_list *new)
{
	t_list	*current;
	int		count;

	current = *list;
	count = 0;
	while (current)
	{
		count++;
		current = current->next;
	}
	if (new)
		count++;
	*list = new;
	return (count);
}
