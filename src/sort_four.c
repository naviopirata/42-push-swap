/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:48:01 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 22:58:08 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	t_cell	*one;
	t_cell	*two;
	t_cell	*three;
	t_cell	*four;

	while (is_ordered(stack_a) == 0)
	{
		one = (t_cell *)(*stack_a)->content;
		two = (t_cell *)(*stack_a)->next->content;
		three = (t_cell *)(*stack_a)->next->next->content;
		four = (t_cell *)(*stack_a)->next->next->next->content;
		if ((two->value < one->value) && (two->value < three->value))
			sa(stack_a);
		else if ((four->value < one->value) && (four->value < two->value))
			rra(stack_a);
		else if ((one->value > four->value) && (one->value > three->value))
			ra(stack_a);
		else
		{
			pb(stack_a, stack_b);
			sort_three(stack_a);
			pa(stack_b, stack_a);
		}
	}
	return ;
}
