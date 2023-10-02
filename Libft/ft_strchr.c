/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:44:40 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/26 16:36:07 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (unsigned char) c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return (&((char *)s)[i]);
	}
	return (NULL);
}

// int main() 
// {
//     const char *cadena = "Hola, mundo!";
//     int caracter = 'm';
//     char *resultado;

//     resultado = ft_strchr(cadena, caracter);

//     if (resultado != NULL) 
// 	{
//         printf("'%c' está en cadena en pos %ld.\n"), caracter, resultado - cadena);
//     } 
// 	else 
// 	{
//         printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
//     }

//     return 0;
// }
