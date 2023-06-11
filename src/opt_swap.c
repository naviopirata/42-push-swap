/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:14:14 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 18:02:28 by ddiniz           ###   ########.fr       */
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
	swap(stack);
	ft_printf("sb\n");
	return (EXIT_SUCCESS);
}

int	sa(t_list **stack)
{
	swap(stack);
	ft_printf("sa\n");
	return (EXIT_SUCCESS);
}
