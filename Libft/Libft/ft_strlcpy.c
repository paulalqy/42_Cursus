/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:24:50 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/16 20:39:38 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *  dst, const char * src, size_t lend)
{
	size_t i;
	i = 0;
	while (src[i] != '\0' && i < lend-1)
	{
		dst[i] = src[i];
		i++; 
	}	
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main()
{
	char dst[20];

	printf("%zu\n", ft_strlcpy(dst, "Hello", 4));
	printf("%s\n", dst);
	return (0);
	
}