/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:46:04 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/28 21:56:20 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	load_args(int max, char *vec[])
{
	t_cell	aux[max];
	t_list	*top_stack_a;

	top_stack_a = NULL;

	aux[0].value = ft_atoi(vec[1]);
	aux[0].index = 1;
	ft_lstadd_back(&top_stack_a, ft_lstnew(&aux[0].value));

	aux[1].value = ft_atoi(vec[2]);
	aux[1].index = 1;
	ft_lstadd_back(&top_stack_a, ft_lstnew(&aux[1].value));

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(top_stack_a, &print_node);

	ft_lstclear(&top_stack_a, &del);
	return (EXIT_SUCCESS);
}
