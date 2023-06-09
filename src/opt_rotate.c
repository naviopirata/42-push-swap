/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:15:44 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 21:37:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*aux;
	// t_list	*last;

	aux = (*stack)->next;
	// *stack = (*stack)->next;
	// last = ft_lstlast(*stack);
	// last->next = aux;
	ft_lstlast((*stack))->next = *stack;
	(*stack)->next = NULL;
	*stack = aux;
	return (EXIT_SUCCESS);
}

int	ra(t_list **stack)
{
	if (!rotate(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	rb(t_list **stack)
{
	if (!rotate(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	return (EXIT_SUCCESS);
}
