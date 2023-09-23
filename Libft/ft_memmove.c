/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:31:09 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/21 13:07:10 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	n;

	n = 0;
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		while (++n <= len)
		{
			((unsigned char *)dst)[len - n] = ((unsigned char *)src)[len - n];
		}
	}
	else
	{
		n = 0;
		while (len-- > 0)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
			n++;
		}
	}
	return (dst);
}

// int main ()
// {
// 	char dst [] = "mi carro se lo llevaron";
// 	char src [] = "hola";
// 	printf("%s \n", ft_memmove(dst, src, 3));
// 	return (0);
// }
