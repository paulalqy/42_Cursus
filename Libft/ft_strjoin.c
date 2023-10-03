/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:55:05 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/03 18:04:50 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*strfinal;
	size_t	i;
	size_t	j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	strfinal = (char *) malloc (((lens1 + lens2) + 1) * sizeof(char));
	if (strfinal == NULL)
		return ((NULL));
	i = -1;
	while (++i < (lens1))
		strfinal [i] = s1[i];
	j = -1;
	while (++j < lens2)
	{
		strfinal[i] = s2[j];
		i++;
	}
	strfinal[i] = '\0';
	return (strfinal);
}
// int main()
// {
// 	char const	*s1 = "hola cara cola";
// 	char const	*s2 = "cacatua";
// 	printf("|%s|\n", ft_strjoin(s1, s2));
// 	return (0);
// }