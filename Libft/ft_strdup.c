/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:49:33 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/02 17:29:46 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	lens1;
	char *s2;
	int	i;

	lens1 = ft_strlen(s1);
	s2 = (char *) malloc ((lens1 +1) * sizeof(char));
	if (s2 == NULL)
		return ((NULL));
	i = 0;
	while (lens1 != 0)
	{
		s2 [i] = s1 [i];
		i ++;
		lens1 --;
	}
	s2 [i] = '\0';
	return (s2);
}
/*int main()
{
	const char s1[] = "Hola";
	char *s;

	s = ft_strdup(s1);
	printf ("%s \n", s);
}*/