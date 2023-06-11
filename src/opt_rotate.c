/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:15:44 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/10 23:34:37 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	detachlast(t_list **lst)
{
	t_list	*aux;
	t_list	*node;
	t_list	*last;

	aux = *lst;
	node = *lst;
	last = *lst;
	while (aux)
	{
		node = last;
		last = aux;
		aux = aux->next;
		if (aux == NULL)
			node->next = NULL;
	}
	return ;
}

int	rotate(t_list **stack)
{
	t_list	*aux;

	aux = (*stack)->next;
	ft_lstlast((*stack))->next = *stack;
	(*stack)->next = NULL;
	*stack = aux;
	return (EXIT_SUCCESS);
}

int	rotaterev(t_list **stack)
{
	t_list	*aux;

	aux = ft_lstlast((*stack));
	detachlast(stack);
	aux->next = *stack;
	*stack = aux;
	return (EXIT_SUCCESS);
}

int	ra(t_list **stack)
{
	if (!rotate(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	rra(t_list **stack)
{
	if (!rotaterev(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
