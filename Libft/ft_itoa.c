/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:58:32 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/05 21:13:33 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dimension(long int i)
{
	int	dim;

	dim = 0;
	if (i == 0)
	{
		return (1);
	}
	if (i < 0)
	{
		dim ++;
		i *= -1;
	}
	while (i > 0)
	{
		i = i / 10;
		dim ++;
	}
	return (dim);
}

char	*ft_itoa(int n)
{
	int			dim;
	char		*resultado;
	int			i;
	long int	nl;

	nl = n;
	dim = dimension(nl);
	resultado = ft_calloc ((dim + 1), sizeof(char));
	i = 1;
	if (resultado == NULL)
		return (NULL);
	if (nl < 0)
	{
		resultado[0] = '-';
		nl *= -1;
	}
	if (nl == 0)
		resultado[0] = '0';
	while (nl > 0)
	{
		resultado[dim - i] = (nl % 10) + '0';
		i ++;
		nl = nl / 10;
	}
	return (resultado);
}

/*int	main()
{
	int n;

	n = -1234;
	printf("%s", ft_itoa(n));
	return(0);
}*/