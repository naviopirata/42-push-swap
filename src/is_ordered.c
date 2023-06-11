/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ordered.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:41:15 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/10 09:43:11 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	is_ordered(t_list **stack)
{
	t_list	*aux;
	t_cell	*node;
	t_cell	*nodenext;

	aux = *stack;
	while (aux)
	{
		if (aux->next) {
			node = (t_cell *)aux->content;
			nodenext = (t_cell *)aux->next->content;
			if (node->value > nodenext->value) {
				return (0);
			}
		}
		aux = aux->next;
	}
	return (1);
}
