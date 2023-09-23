/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:35:29 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/21 13:56:06 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"


size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	tamdst;
	size_t	tamsrc;

	i = 0;
	tamdst = ft_strlen (dst);
	tamsrc = ft_strlen (src);
	if (dstsize < 1 || dstsize <= tamdst)
	{
		return (tamsrc + dstsize);
	}
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((i < dstsize - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (tamdst + tamsrc);
}

/*int main()
{
    char destination[20] = "Hello, ";
    const char *source = "world!";
    size_t dstsize = sizeof(destination);

    size_t result = ft_strlcat(destination, source, dstsize);

    printf("Concatenated string: %s\n", destination);
    printf("Total length: %zu\n", result);

    return 0;
}*/