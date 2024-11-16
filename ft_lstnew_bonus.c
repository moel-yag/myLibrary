/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:58:19 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/16 14:54:25 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// void print_node(t_list *node)
// {
//     if (node)
//     {
//         if (node->content)
//             printf("Node content: %s\n", (char *)node->content);
//         else
//             printf("Node content: NULL\n");
//     }
//     else
//     {
//         printf("Node is NULL\n");
//     }
// }

// int main()
// {
//     // Test 1: Normal node creation with a string
//     printf("Test 1: Normal node creation\n");
//     t_list *node1 = ft_lstnew("Hello");
//     print_node(node1);
//     free(node1);  // Free the node after use

//     // Test 2: Node creation with NULL content
//     printf("\nTest 2: Node creation with NULL content\n");
//     t_list *node2 = ft_lstnew(NULL);
//     print_node(node2);
//     free(node2);  // Free the node after use

//     // Test 3: Simulating memory allocation failure (using valgrind or 
// temporarily overriding malloc)
//     // Note: This test isn't straightforward in C without modifying malloc,
//  so it is typically done with tools like valgrind.
//     // Example: valgrind --leak-check=full ./test_program

//     return 0;
// }