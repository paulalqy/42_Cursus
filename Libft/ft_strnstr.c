/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:47:22 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/25 17:22:46 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i] && (i + len_needle - 1) < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			if (j == len_needle - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}

int main ()
{
	const char *haystack = "aaabcabcd";
	const char *needle = "abcd";
	size_t len = 15;
	printf("Haystack = %p\n", haystack + 5);
	printf("%p\n", ft_strnstr(haystack, needle, len));
	return (0);
}