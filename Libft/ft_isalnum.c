/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:19 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/15 16:15:21 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_isalnum (int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int main ()
{
	int valor = 'A';
	if (ft_isalnum (valor))
		printf("El carácter %c es alfanumérico.\n", valor);
		
	else
		printf("%c no es alfanumerico. \n", valor);
	
	return (0);
}
