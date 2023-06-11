/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:04:36 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 19:43:19 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <unistd.h>

void	sort_three(t_list **stack)
{
	t_cell	*one;
	t_cell	*two;
	t_cell	*three;

	one = (t_cell *)(*stack)->content;
	two = (t_cell *)(*stack)->next->content;
	three = (t_cell *)(*stack)->next->next->content;
	if ((one->id > two->id) && (one->id < three->id))
		sort_two(stack);
	else if ((one->id < two->id) && (two->id > three->id))
	{
		rra(stack);
		// ft_lstiter(*stack, &node_print);
		// ft_printf("\n");
		// sleep(3);
		sort_two(stack);
	}
	else
	{
		ra(stack);
		sort_two(stack);
	}
	return ;
}
// 0 2 1
