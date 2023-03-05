/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:23 by ddiniz            #+#    #+#             */
/*   Updated: 2023/03/03 18:35:21 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	if (argc <= 1)
		return (EXIT_SUCCESS);
	stack_a = stack_load(argc, argv);

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(stack_a, &print_node);

	ft_lstclear(&stack_a, &del);
	return (EXIT_SUCCESS);
}
