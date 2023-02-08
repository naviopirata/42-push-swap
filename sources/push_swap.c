/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:23 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/08 08:31:38 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(void)
{
	t_cell	aux[2];
	t_list	*top_stack_a;
	//t_list	*top_stack_b;

	top_stack_a = NULL;
	//top_stack_b = NULL;
	//
	aux[0].value = 9;
	aux[0].index = 1;
	aux[1].value = 8;
	aux[1].index = 2;

	ft_lstadd_front(&top_stack_a, ft_lstnew(&aux[0].value));
	ft_lstadd_front(&top_stack_a, ft_lstnew(&aux[1].value));
	//ft_lstadd_front(&top_stack_a, ft_lstnew());

	//ft_lstadd_front(&top_stack_b, ft_lstnew());
	//ft_lstadd_front(&top_stack_b, ft_lstnew());

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(top_stack_a, &print_node);

	//ft_printf("Stack B: %c\n", 0);
	//ft_lstiter(top_stack_b, &print_node);

	//push(&top_stack_a, &top_stack_b);

	ft_lstclear(&top_stack_a, &del);
	//ft_lstclear(&top_stack_b, &del);

	//free(top_stack_a);
	//free(top_stack_b);
	return (EXIT_SUCCESS);
}
