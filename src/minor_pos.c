/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minor_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:21:51 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 23:24:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <unistd.h>

int	minor_id(t_list **stack)
{
	t_list	*aux;
	int		minor;

	aux = *stack;
	minor = ((t_cell *)aux->content)->id;
	while (aux)
	{
		if (aux->next)
		{
			if (((t_cell *)aux->content)->id
				> ((t_cell *)aux->next->content)->id)
				if (((t_cell *)aux->next->content)->id <= minor)
					minor = ((t_cell *)aux->next->content)->id;
		}
		aux = aux->next;
	}
	return (minor);
}

int	get_pos(t_list *aux, int minor, int pos)
{
	int	i;

	i = 1;
	while (aux)
	{
		if (aux->next && (((t_cell *)aux->content)->id
				> ((t_cell *)aux->next->content)->id))
		{
			if (((t_cell *)aux->next->content)->id <= minor)
			{
				minor = (((t_cell *)aux->next->content)->id);
				pos = i + 1;
			}
		}
		i++;
		if (((t_cell *)aux->content)->id < minor)
		{
			minor = ((t_cell *)aux->content)->id;
			pos = i;
		}
		aux = aux->next;
	}
	return (pos);
}

int	minor_pos(t_list **stack)
{
	int		pos;
	int		minor;

	pos = 1;
	minor = minor_id(stack);
	pos = get_pos(*stack, minor, pos);
	return (pos);
}
