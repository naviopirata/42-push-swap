/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_load.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:46:04 by ddiniz            #+#    #+#             */
/*   Updated: 2023/03/03 22:19:57 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	aux_unload(t_cell *aux[], int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		free(aux[i]);
		i++;
	}
	return (EXIT_SUCCESS);
}

// static int	stack_index_fix(t_cell **src, int max)
// {
// 	int	i;
// 	int	j;
// 	int	aux;
//
// 	i = 0;
// 	while (i < max)
// 	{
// 		j = i + 1;
// 		while(j <= max)
// 		{
// 			aux = i;
// 			if (src[i]->value > src[j]->value)
// 			{
// 				src[i]->index = src[j]->index;
// 				src[j]->index = aux;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	while (i < max)
// 	{
// 		ft_printf("value: %d\nid: %d\n", src[i]->value, src[i]->index);
// 		i++;
// 	}
// 	return (EXIT_SUCCESS);
// }

t_list	*stack_load(int max, char *vec[])
{
	t_cell	*target[max];
	t_cell	*aux[max];
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < max - INDEXADJ)
	{
		target[i] = (t_cell *)malloc(sizeof(t_cell));
		aux[i] = (t_cell *)malloc(sizeof(t_cell));
		target[i]->value = ft_atoi(vec[i + INDEXADJ]);
		target[i]->index = i + INDEXADJ;
		aux[i]->value = ft_atoi(vec[i + INDEXADJ]);
		aux[i]->index = i + INDEXADJ;
		ft_lstadd_back(&list, ft_lstnew(&target[i]->value));
		i++;
	}
	// stack_index_fix(aux, max - INDEXADJ);
	aux_unload(aux, max - INDEXADJ);
	return (list);
}
