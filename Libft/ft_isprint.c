/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:26:09 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/21 12:32:42 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/*int main()
{
	int valor = 32;
	if (ft_isprint (valor))
			printf ("El caracter %c es printable.\n", valor);
	else 		
		printf ("El caracter %c no es printable. \n", valor);
	return (1);
}
*/