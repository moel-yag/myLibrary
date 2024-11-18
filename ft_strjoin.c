/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:21 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 15:44:46 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*copy;

	copy = malloc((ft_len(s1) + ft_len(s2)) * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < ft_len(s1))
	{
		copy[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_len(s2))
	{
		copy[i + j] = s2[j];
		j++;
	}
	copy[i + j] = '\0';
	return (copy);
}

// int main()
// {
// 	printf("%s\n", ft_strjoin(NULL, NULL));
// }