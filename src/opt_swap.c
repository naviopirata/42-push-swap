/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:14:14 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 16:55:51 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	swap(t_list **stack)
{
	t_list	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	aux->next = (*stack)->next;
	(*stack)->next = aux;
	return (EXIT_SUCCESS);
}

int	sb(t_list **stack)
{
	if (!swap(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	sa(t_list **stack)
{
	if (!swap(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	return (EXIT_SUCCESS);
}
