/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:57:26 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/24 14:00:52 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_not_int(int fd)
{
	ft_putchar_fd ('2', fd);
	return (147483648);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	divide;
	int	user_input;

	divide = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == -2147483648)
		n = ft_is_not_int(fd);
	user_input = n;
	while (n >= 10)
	{
		divide *= 10;
		n /= 10;
	}
	while (divide > 0)
	{
		ft_putchar_fd('0' + (user_input / divide), fd);
		user_input = user_input % divide;
		divide /= 10;
	}
}
