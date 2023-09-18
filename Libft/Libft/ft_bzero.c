/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:14:41 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/16 19:10:27 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_bzero (void *s, size_t n)
{
	size_t i;
	i = 1;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
int main()
{
	char cadena[4] = {'1', '2', '3', '4'};
	size_t n = 3;
	size_t i = 0;
	
	ft_bzero(cadena, n);
	while (i < n + 1)
	{
		write(1, &cadena[i], 1);
		i++;
	}
	write(1, "\n", 1);
	
	//bzero(cadena, n);
	//printf ("%c\n", cadena[3]);
	return (0);
}