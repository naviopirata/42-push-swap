/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:38:39 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 20:29:32 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <unistd.h>

static void	run_sort(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
	return ;
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	pos;

	pos = minor_pos(stack_a);
	// ft_printf("pos: %d\n", pos);
	// sleep(3);
	if (pos == 1)
		run_sort(stack_a, stack_b);
	else if (pos == 2)
	{
		sa(stack_a);
		run_sort(stack_a, stack_b);
	}
	else if (pos == 3)
	{
		rra(stack_a);
		rra(stack_a);
		run_sort(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		run_sort(stack_a, stack_b);
	}
	return ;
}
