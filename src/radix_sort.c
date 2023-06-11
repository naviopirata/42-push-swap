/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:37:44 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 10:35:59 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b, int max)
{
	int	i;
	int	j;

	i = 0;
	while (!is_ordered(stack_a))
	{
		j = 0;
		while ((j < max) && !is_ordered(stack_a))
		{
			if ((((t_cell *)(*stack_a)->content)->id >> i) & 1)
			{
				ra(stack_a);
			}
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_b, stack_a);
		i++;
	}
	ft_lstiter(*stack_a, node_print);
	return ;
}
