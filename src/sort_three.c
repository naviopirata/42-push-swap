/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:04:36 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 16:52:20 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sort_three(t_list **stack)
{
	t_cell	*one;
	t_cell	*two;
	t_cell	*three;

	one = (t_cell *)(*stack)->content;
	two = (t_cell *)(*stack)->next->content;
	three = (t_cell *)(*stack)->next->next->content;
	if ((one->value > two->value) && (one->value < three->value))
		sort_two(stack);
	else if ((one->value < two->value) && (two->value > three->value))
	{
		rra(stack);
		sort_two(stack);
	}
	else
	{
		ra(stack);
		sort_two(stack);
	}
	return ;
}
