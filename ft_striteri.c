/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:18:15 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/18 14:37:37 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s ||!f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void    ft_upper(unsigned int i, char *s)
// {
//     i = 0;
//     while (s[i])
//     {
//         if (s[i] && s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
//         i++;
//     }
// }

// int main()
// {
//     char    str[] = "hello from bg";
//     ft_striteri(str, ft_upper);
//     printf("%s\n", str);
// }