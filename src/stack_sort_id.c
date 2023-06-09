/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:17:37 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 19:13:50 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	stack_set_id(int argc, int *vec, t_list *stack)
{
	t_list	*aux;
	int		i;

	i = 0;
	while (++i < argc)
	{
		aux = stack;
		while (aux)
		{
			if (vec[i - 1] == ((t_cell *)aux->content)->value)
				((t_cell *)aux->content)->id = i;
			aux = aux->next;
		}
	}
	return ;
}
