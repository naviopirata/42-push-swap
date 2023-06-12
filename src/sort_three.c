/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:44:47 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 22:45:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sort_three(t_list **stack)
{
	t_cell	*one;
	t_cell	*two;
	t_cell	*three;

	while (is_ordered(stack) == 0)
	{
		one = (t_cell *)(*stack)->content;
		two = (t_cell *)(*stack)->next->content;
		three = (t_cell *)(*stack)->next->next->content;
		if ((one->value < two->value) && (two->value > three->value))
			rra(stack);
		else
			sa(stack);
	}
	return ;
}
