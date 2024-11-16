/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:21 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/02 15:11:05 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*copy;

	if (!s1 || !s2)
		return (NULL);
	copy = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		copy[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		copy[i + j] = s2[j];
		j++;
	}
	copy[i + j] = '\0';
	return (copy);
}

// int main() {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";

//     char *result = ft_strjoin(s1, s2);
//     if (result) {
//         printf("Joined string: %s\n", result);
//         free(result); // Don't forget to free the allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     // Additional test cases
//     char *test1 = ft_strjoin("First part, ", "second part.");
//     char *test2 = ft_strjoin("foo", "bar");
//     char *test3 = ft_strjoin("", "empty start");
//     char *test4 = ft_strjoin("empty end", "");

//     printf("Test 1: %s\n", test1 ? test1 : "NULL");
//     printf("Test 2: %s\n", test2 ? test2 : "NULL");
//     printf("Test 3: %s\n", test3 ? test3 : "NULL");
//     printf("Test 4: %s\n", test4 ? test4 : "NULL");

//     // Free the additional test cases
//     free(test1);
//     free(test2);
//     free(test3);
//     free(test4);

//     return 0;
// }
