/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:46:04 by ddiniz            #+#    #+#             */
/*   Updated: 2023/03/01 19:14:40 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	load_args(int max, char *vec[])
{
	t_cell	aux[max];
	t_list	*top_stack_a;
	int		i;

	top_stack_a = NULL;

	i = 0;
	while (i < max - 1)
	{
		aux[i].value = ft_atoi(vec[i + 1]);
		aux[i].index = i + 1;
		ft_lstadd_back(&top_stack_a, ft_lstnew(&aux[i].value));
		i++;
	}

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(top_stack_a, &print_node);

	ft_lstclear(&top_stack_a, &del);
	return (EXIT_SUCCESS);
}
