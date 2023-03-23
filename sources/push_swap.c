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

void	vec_print(int	*vec, int max)
{
	int	i;

	ft_printf("Vec: %c\n", 0);
	i = 0;
	while (i < max)
	{
		ft_printf("%d\n", vec[i]);
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	int	*vec;

	if (argc <= 1)
		return (EXIT_SUCCESS);
	stack_a = stack_load(argc, argv);

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(stack_a, &print_node);

	ft_lstclear(&stack_a, &del);
	vec = vec_load(argc, argv);
	vec_print(vec, argc - 1);
	quick_sort_vec(vec, 0, argc - 2);
	vec_print(vec, argc - 1);
	free(vec);
	
	return (EXIT_SUCCESS);
}
