/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:19:50 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/01 08:35:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **list_src, void (*del)(void *))
{
	t_list	*list_cpy;
	t_list	*aux;

	if (!list_src || !del)
		return ;
	list_cpy = *list_src;
	while (list_cpy)
	{
		aux = list_cpy->next;
		del(list_cpy->content);
		free(list_cpy);
		list_cpy = aux;
	}
	*list_src = NULL;
	return ;
}
