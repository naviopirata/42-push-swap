/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:16:04 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 22:01:12 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdlib.h>

int	pushswap_init(int argc, char **argv, int *vec)
{
	t_list	*stack_a;
	t_list	*stack_b;
	// t_cell	*arr;

	// stack_a = stack_load((argc - 1), argv);
	// stack_a = (t_list *)malloc(sizeof(t_list *));
	// stack_b = (t_list **)malloc(sizeof(t_list *));
	stack_a = NULL;
	stack_b = NULL;
	stack_load((argc - 1), argv, &stack_a);
	stack_set_id(argc, vec, stack_a);
	pushswap_sort(&stack_a, &stack_b, (argc - 1));
	ft_lstclear(&stack_a, free);
	// free(stack_a);
	// free(arr);
	return (EXIT_SUCCESS);
}
