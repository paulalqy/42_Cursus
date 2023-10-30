/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:55:22 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/25 13:29:08 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list	*first = ft_lstnew("hola");
	t_list	*second = ft_lstnew("adios");

	t_list	*lst = NULL;
	ft_lstadd_front(&lst, first);
	printf("Primer nodo al principio: %s\n", (char *)lst->content);
	ft_lstadd_front(&lst, second);
	printf("Primer nodo despues: %s\n", (char *)lst->content);
}*/