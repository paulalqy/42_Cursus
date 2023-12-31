/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:01:12 by palopez-          #+#    #+#             */
/*   Updated: 2023/10/25 13:25:33 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc (sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}/*
int main()
{
	//char *str = (char *)malloc(sizeof(char) * 5);
	t_list	*lst = ft_lstnew("HOLA");
	printf("%s", (char *)lst->content);
}	
*/