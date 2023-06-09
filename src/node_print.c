/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:15:26 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 16:15:28 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	node_print(void *node)
{
	ft_printf("%d %d\n", ((t_cell *)node)->value, ((t_cell *)node)->id);
	return ;
}
