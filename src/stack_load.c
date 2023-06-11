/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_load.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:15:54 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/10 08:41:07 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdlib.h>

t_cell	*create_tcell(int id, int value)
{
	t_cell	*node;

	node = (t_cell *)malloc(sizeof(t_cell));
	node->value = value;
	node->id = id;
	return (node);
}

void	stack_load(int max, char **argv, t_list **stack)
{
	int		i;

	i = 0;
	while (i < max)
	{
		ft_lstadd_back(
			stack, ft_lstnew(create_tcell(i + 1, ft_atoi(argv[i + 1]))));
		i++;
	}
	return ;
}
