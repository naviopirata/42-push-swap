/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:16:36 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 14:38:44 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <unistd.h>

static void	run_sort(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_b, stack_a);
	return ;
}

void	rra_run_sort(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	run_sort(stack_a, stack_b);
	return ;
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	pos;

	pos = minor_pos(stack_a);
	if (pos == 1)
		run_sort(stack_a, stack_b);
	else if (pos == 2)
	{
		sa(stack_a);
		run_sort(stack_a, stack_b);
	}
	else if (pos == 3)
	{
		ra(stack_a);
		ra(stack_a);
		run_sort(stack_a, stack_b);
	}
	else if (pos == 4)
	{
		rra(stack_a);
		rra(stack_a);
		run_sort(stack_a, stack_b);
	}
	else
		rra_run_sort(stack_a, stack_b);
	ft_lstiter(*stack_a, node_print);
	ft_printf("\n");
	return ;
}
