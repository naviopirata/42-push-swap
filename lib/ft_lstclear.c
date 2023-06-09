/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:19:50 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 21:12:36 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	// t_list	*aux;
	t_list	*aft;

	// if (!lst || !del)
	// 	return ;
	// aux = *lst;
	while (*lst)
	{
		aft = (*lst)->next;
		// del(aux->content);
		// free(aux);
		ft_lstdelone(*lst, del);
		*lst = aft;
		printf("here");
	}
	// lst = 0;
}
