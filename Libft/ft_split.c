/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:35:20 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/06 14:28:26 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count (char const *s, char c)
{
	int		i;
	int		palabras;

	i = 0;
	palabras = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i +1] != c && s[i +1] != '\0')
			palabras ++;
		i ++;
	}	
	return (palabras);
}

/*char	**ft_split(char const *s, char c)
{
	
}*/

int main()
{
	char *s;
	char c;

	c = 'a';
	s = "hola caracola";

	printf("%d", count(s, c));
	return (0);
}