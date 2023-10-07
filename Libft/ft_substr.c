/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:43 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/07 17:15:13 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*sub;
	size_t	i;

	len_s = ft_strlen (s);
	if (start > len_s)
	{
		sub = ft_calloc(1, sizeof(char));
		if (sub == NULL)
			return (NULL);
		return (sub);
	}
	if (len > (len_s - start))
		len = len_s - start;
	sub = (char *) ft_calloc ((len +1), (sizeof (char)));
	if (sub == NULL)
		return ((NULL));
	i = 0;
	while (i < len)
	{
		sub[i] = s [start];
		i ++;
		start ++;
	}
	return (sub);
}

/*int main()
{
	char *s = "Hola amigos feos";
	unsigned int start = 5;
	size_t len = 6;
	printf("|%s| \n", ft_substr(s, start, len));
	return (0);
}*/
