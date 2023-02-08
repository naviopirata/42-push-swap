/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:04:56 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/01 08:48:37 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list_src, void (*func)(void *))
{
	t_list	*aux;

	aux = list_src;
	while (aux)
	{
		func(aux->content);
		aux = aux->next;
	}
	return ;
}
