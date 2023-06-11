/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:38:39 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 01:18:39 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	minor_pos(t_list **stack)
{
	int pos;
	int i;
	int minor;
	t_list	*aux;

	i = 1;
	pos = 1;
	minor = 1;
	aux = *stack;
	while (aux)
	{
		if (aux->next)
		{
			ft_printf("actual: %d\n", ((t_cell *)aux->content)->id);
			if (((t_cell *)aux->content)->id > ((t_cell *)aux->next->content)->id)
			{
				ft_printf("minor: %d\n", minor);
				if (((t_cell *)aux->content)->id <= minor)
				{
					minor = (((t_cell *)aux->next->content)->id);
					pos = i + 1;
					ft_printf("pos: %d\n", pos);
				}
			}
		}
		i++;
		ft_printf("i: %d\n", i);
		if (((t_cell *)aux->content)->id < minor)
		{
			minor = ((t_cell *)aux->content)->id;
			pos = i;
		}
		aux = aux->next;
	}
	return (pos);
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int pos;

	ft_lstiter(*stack_a, node_print);
	ft_lstiter(*stack_b, node_print);
	pos = minor_pos(stack_a);
	ft_printf("end: %d\n", pos);
	return ;
}
