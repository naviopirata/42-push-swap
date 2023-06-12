/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 23:04:50 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 23:28:52 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static void	run_sort(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_b, stack_a);
	return ;
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	t_cell	*one;
	t_cell	*two;
	t_cell	*three;
	t_cell	*four;
	t_cell	*five;

	while (is_ordered(stack_a) == 0)
	{
		one = (t_cell *)(*stack_a)->content;
		two = (t_cell *)(*stack_a)->next->content;
		three = (t_cell *)(*stack_a)->next->next->content;
		four = (t_cell *)(*stack_a)->next->next->next->content;
		five = (t_cell *)(*stack_a)->next->next->next->next->content;
		if ((two->value < one->value) && (two->value < three->value))
			sa(stack_a);
		else if ((four->value < one->value) && (four->value < two->value))
			rra(stack_a);
		else if ((one->value > four->value) && (one->value > five->value))
			ra(stack_a);
		else
			run_sort(stack_a, stack_b);
	}
	return ;
}
