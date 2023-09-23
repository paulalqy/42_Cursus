/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:24:50 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/21 12:48:23 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t lend)
{
	size_t	i;

	if (lend > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < lend - 1)
		{
			dst[i] = src[i];
			i++;
		}	
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()
// {
// 	char dst[60];

// 	printf("%zu\n", ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0));
// 	printf("%s\n", dst);
// 	return (0);

// }
