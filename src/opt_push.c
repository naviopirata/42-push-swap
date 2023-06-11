/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:14:00 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 18:07:13 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_list	**push(t_list **stack_source, t_list **stack_target)
{
	t_list	*aux;

	aux = (*stack_source)->next;
	(*stack_source)->next = *stack_target;
	*stack_target = *stack_source;
	*stack_source = aux;
	return (stack_target);
}

int	pa(t_list **stack_source, t_list **stack_target)
{
	push(stack_source, stack_target);
	ft_printf("pa\n");
	return (EXIT_SUCCESS);
}

int	pb(t_list **stack_source, t_list **stack_target)
{
	push(stack_source, stack_target);
	ft_printf("pb\n");
	return (EXIT_SUCCESS);
}
