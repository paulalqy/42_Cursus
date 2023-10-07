/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:35:20 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/07 17:08:00 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int		i;
	int		palabras;

	i = 0;
	palabras = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			palabras ++;
		i ++;
	}	
	return (palabras);
}

static	char	*ft_subcadena(char const **s, char c)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = 0;
	while ((*s)[i] == c)
		i ++;
	while ((*s)[i + len] != '\0' && (*s)[i + len] != c)
		len ++;
	str = ft_substr((*s), i, len);
	(*s) = (*s) + (i + len);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**list;
	int		j;

	words = ft_count(s, c);
	list = malloc ((words +1) * sizeof(char *));
	if (list == NULL)
		return (NULL);
	list [words] = NULL;
	j = 0;
	while (j < words)
	{
		list[j] = ft_subcadena(&s, c);
		if (list[j] == NULL)
		{
			while (j-- > 0)
				free (list[j]);
			free (list);
			return (NULL);
		}
		j++;
	}
	return (list);
}

/*int	main(void)
{
	char	**lista;
	char	*s;
	char	c;
	int		i;

	c = 'a';
	s = "hola caracola";
	lista = ft_split(s, c);
	i = 0;
	while (lista[i] != NULL)
	{
		printf("%s\n",lista[i]);
		i ++;
	}
	return (0);
}*/