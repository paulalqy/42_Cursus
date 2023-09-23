/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:51:41 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/21 12:31:56 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main ()
{
	int valor = 122;
	if (ft_isascii (valor))
		printf ("El carácter %c es ascii.\n", valor);
	else
		printf ("El carácter %c no es ascii.\n", valor);
		
	return (1);
}
*/