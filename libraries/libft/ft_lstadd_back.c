/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:25:17 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/01 08:32:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list_src, t_list *new)
{
	t_list	*aux;

	aux = *list_src;
	if (!*list_src)
	{
		*list_src = new;
		return ;
	}
	aux = ft_lstlast(aux);
	aux->next = new;
}
