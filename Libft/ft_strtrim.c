/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:35:37 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/05 17:04:10 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*null_s(void)
{
	char	*s;

	s = (char *) malloc (sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy(s, "", 1);
	return (s);
}

static int	checkset(char c, char const *set)
{
	int	i;

	i = 0;

	while (set [i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fin;
	size_t	ini;
	char	*resultado;
	int		i;

	if (!s1 || !set)
		return (NULL);
	fin = ft_strlen (s1);
	ini = 0;
	while (s1[ini] != '\0' && checkset (s1[ini], set))
		ini++;
	if (ini == fin)
		return (null_s());
	while (fin > ini && checkset (s1[fin -1], set))
		fin --;
	resultado = (char *) malloc ((fin - ini +1) * sizeof(char));
	if (resultado == NULL)
		return ((NULL));
	i = 0;
	while (ini < fin)
		resultado [i++] = s1[ini++];
	resultado[i] = '\0';
	return (resultado);
}
// int main()
// {
// 	char const	*s1 = "!!*!hola*ai!go!!!***!*";
// 	char const	*s2 = "!*";
// 	printf("|%s|\n", ft_strtrim(s1, s2));
// 	return (0);
// }