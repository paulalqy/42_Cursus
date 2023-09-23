/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:31:29 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/21 12:28:46 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cmp;

	i = 0;
	cmp = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0'  && cmp  == 0)
	{
		cmp = (unsigned char) s1[i] - (unsigned char) s2[i];
		i++;
	}
	if (i < n && (s1[i] || s2[i]) && cmp == 0)
		cmp = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (cmp);
}

// int main()
// {
// 	printf ("%d\n", ft_strncmp("test", "tEst", 4));
// 	return (0);
// }
