/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:16:04 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 23:25:35 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdlib.h>

int	push_swap_init(int argc, char **argv, int *vec)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_load((argc - 1), argv, &stack_a);
	stack_set_id(argc, vec, stack_a);
	push_swap_sort(&stack_a, &stack_b, (argc - 1));
	ft_lstclear(&stack_a, free);
	return (EXIT_SUCCESS);
}
