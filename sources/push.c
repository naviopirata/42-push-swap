/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:51:14 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/06 08:36:43 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
// TODO: desenhar ponteiro e ponteiro de ponteiro

int	push(t_list **stack_source, t_list **stack_target)
{

	ft_lstadd_front(stack_target, *stack_source);
	*stack_source = (*stack_source)->next;
	return (EXIT_SUCCESS);
}
