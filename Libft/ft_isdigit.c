/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:54:30 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/12 17:00:19 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str [i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*int main ()
{
	char str[100] = "123855";
	int resultado;
	resultado = ft_isdigit(str);
	printf("%d", resultado);
	return (0);
}
*/

