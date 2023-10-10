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

// char	my_function(unsigned int i, char c)
// {
// 	(void) i;
// 	c = c + 1;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*m;

	i = 0;
	len = ft_strlen(s);
	m = (char *) malloc ((len + 1) * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		m[i] = (*f)(i, s[i]);
		i ++;
	}
	m[len] = '\0';
	return (m);
}
// int	main()
// {
// 	char	s[] = "hola";
// 	char	*resultado;

// 	resultado = ft_strmapi(s, my_function);
// 	printf("%s \n", resultado);
// 	return (0);
// }
