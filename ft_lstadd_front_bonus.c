/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:42:28 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/16 13:18:14 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}

// int main()
// {
// 	t_list *one = ft_lstnew("one");
// 	t_list *two = ft_lstnew("two");
// 	t_list *three = NULL;
// 	ft_lstadd_front(&three, two);
// 	ft_lstadd_front(&three, one);
// 	while (three)
// 	{
// 		printf("%s\n", three->content);
// 		three = three->next;
// 	}
// }

// int main()
// {
//     t_list *list;

//     // Test 1: Add to empty list
//     printf("Test 1: Add a node to an empty list\n");
//     list = NULL;
//     t_list *new_node = ft_lstnew("first");
//     ft_lstadd_front(&list, new_node);
//     print_list(list);  // Expected output: "first" -> NULL
//     free_list(list);

//     // Test 2: Add to non-empty list
//     printf("\nTest 2: Add a node to a non-empty list\n");
//     list = ft_lstnew("first");
//     t_list *new_node2 = ft_lstnew("second");
//     ft_lstadd_front(&list, new_node2);
//     print_list(list);  // Expected output: "second" -> "first" -> NULL
//     free_list(list);

//     // Test 3: Add NULL as the new node
//     printf("\nTest 3: Add NULL as the new node\n");
//     list = ft_lstnew("first");
//     ft_lstadd_front(&list, NULL);
//     print_list(list);  // Expected output: "first" -> NULL
//     free_list(list);

//     // Test 4: Add to NULL list pointer
//     printf("\nTest 4: Add to NULL list pointer\n");
//     list = NULL;
//     ft_lstadd_front(&list, ft_lstnew("first"));
//     print_list(list);  // Expected output: "first" -> NULL
//     free_list(list);

//     return 0;
// }