/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:27:42 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/25 20:15:56 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int signo;
	int resultado;

	resultado = 0;
	signo = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1]  >= '0' && str[i + 1] <= '9')
			resultado = (resultado + (str[i] - 48)) * 10;
		else
			resultado = resultado + (str[i] - 48);
		i ++;
	}
	return (resultado * signo);
}

/*int main(void)
{
	printf("org = %d\n", atoi("+214"));
	printf("mia = %d\n", ft_atoi("+214"));
}*/ 

