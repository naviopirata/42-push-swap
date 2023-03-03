/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:46:04 by ddiniz            #+#    #+#             */
/*   Updated: 2023/03/02 22:25:31 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_list	*load_args(int max, char *vec[])
{
	t_cell	*aux[max];
	t_list	*list;
	int		i;

	list = NULL;

	i = 0;
	while (i < max - 1)
	{
		aux[i] = (t_cell *)malloc(sizeof(t_cell));
		aux[i]->value = ft_atoi(vec[i + 1]);
		aux[i]->index = i + 1;
		ft_lstadd_back(&list, ft_lstnew(&aux[i]->value));
		i++;
	}
	return (list);
}
