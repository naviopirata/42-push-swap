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

t_list	*stack_load(t_list *list)
{
	return (list);
}

t_list	*args_load(int max, char *vec[])
{
	t_cell	*target[max];
	t_cell	aux[max];
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < max - ARGCADJUST)
	{
		target[i] = (t_cell *)malloc(sizeof(t_cell));
		target[i]->value = ft_atoi(vec[i + ARGCADJUST]);
		target[i]->index = i + ARGCADJUST;
		aux[i].value = target[i]->value;
		aux[i].index = target[i]->index;
		ft_lstadd_back(&list, ft_lstnew(&target[i]->value));
		i++;
	}
	(void)aux[0];
	return (stack_load(list));
}
