/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:15:19 by ddiniz            #+#    #+#             */
/*   Updated: 2023/03/03 18:52:59 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>
# include <ft_printf.h>
# include <stdlib.h>

# define INDEXADJ 1

typedef struct	s_cell {
	int	value;
	int	index;
} t_cell;

// AUXILIAR METHODS
void	del(void *content);
void	print_node(void *node);

int	push(t_list **stack_source, t_list **stack_target);
t_list	*stack_load(int index, char *vec[]);
// int	swap(t_list *stack);
// int	swap_all(t_list *stack_a, t_list *stack_b);
// int	rotate(t_list *stack);
// int	rotate_all(t_list *stack_source, t_list *stack_target);
// int	rotate_rev(t_list *stack);
// int	rotate_rev_all(t_list *stack_source, t_list *stack_target);

#endif
