/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:39:45 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 17:47:40 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	small_sort(t_list **stack_a, t_list **stack_b, int max)
{
	if (is_ordered(stack_a))
		return ;
	if (max == 2)
		sort_two(stack_a);
	else if (max == 3)
		sort_three(stack_a);
	else if (max == 4)
		sort_four(stack_a, stack_b);
	else
		sort_five(stack_a, stack_b);
	return ;
}
