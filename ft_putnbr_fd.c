/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <moel-yag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:47:11 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/16 10:47:17 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}

// int main() {
//     // Test 1: Print positive number
//     ft_putnbr_fd(123, STDOUT_FILENO);  // Expected output: 123
//     write(STDOUT_FILENO, "\n", 1); // Newline for separation

//     // Test 2: Print negative number
//     ft_putnbr_fd(-456, STDOUT_FILENO);  // Expected output: -456
//     write(STDOUT_FILENO, "\n", 1); // Newline for separation

//     // Test 3: Print zero
//     ft_putnbr_fd(0, STDOUT_FILENO);  // Expected output: 0
//     write(STDOUT_FILENO, "\n", 1); // Newline for separation

//     // Test 4: Print the minimum integer value
//     ft_putnbr_fd(-2147483648, STDOUT_FILENO);// Expected output: -2147483648
//     write(STDOUT_FILENO, "\n", 1); // Newline for separation

//     // Test 5: Print large positive number
//     ft_putnbr_fd(987654321, STDOUT_FILENO);  // Expected output: 987654321
//     write(STDOUT_FILENO, "\n", 1); // Newline for separation

//     // Test 6: Print large negative number
//     ft_putnbr_fd(-987654321, STDOUT_FILENO);  // Expected output: -987654321
//     write(STDOUT_FILENO, "\n", 1); // Newline for separation

//     return 0;
// }