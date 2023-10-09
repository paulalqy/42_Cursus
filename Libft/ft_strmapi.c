/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:31:39 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/09 13:09:20 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	my_function(unsigned int i, char c)
{
	char	c;

	c = c + 1;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char *cadena;
	
	len = ft_strlen(s);
	cadena = malloc (len * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		cadena[i]  = (*f)(i, s[i]);
		i ++;
	}
	return (cadena);
}
