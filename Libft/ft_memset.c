/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:00:02 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/16 17:45:38 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (/*((unsigned char *)s)[i] != '\0' && */ i < len)
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}
int main()
{
	char *cadena;
	int c = 'A';
	size_t len = 2;
	printf ("%s\n", ft_memset(cadena, c, len));
	printf ("%s\n", memset(cadena, c, len));
	return (0);
}