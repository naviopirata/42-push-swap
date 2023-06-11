/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:39:34 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 11:53:59 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	push_swap_sort(t_list **stack_a, t_list **stack_b, int max)
{
	if (max == 1)
		return ;
	else if (max < 6)
	{
		small_sort(stack_a, stack_b, max);
		return ;
	}
	radix_sort(stack_a, stack_b, max);
	return ;
}
