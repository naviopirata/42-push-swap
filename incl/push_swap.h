/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:57:39 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/11 17:00:52 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft.h"

typedef struct s_cell {
	int	value;
	int	id;
}	t_cell;

/* AUXILIAR METHODS */
void	node_del(void *content);
void	node_print(void *node);
int		parse_int(const char *str);
int		is_ordered(t_list **stack);
int		check_int(int max, char *vec[]);
int		minor_pos(t_list **stack);

/* VECTOR MODULES */
int		*argv_load(int max, char *vec[]);
int		*vec_sort(int argc, char **argv);
int		*vec_load(int max, char *vec[]);
void	vec_quick_sort(int *vec, int low, int high);

/* PUSH SWAP MODULES */
/* void	quick_sort_like(t_list **stack_a);  */
void	stack_load(int index, char **argv, t_list **stack);
void	stack_set_id(int argc, int *vec, t_list *stack);
int		push_swap_init(int argc, char **argv, int *vec);
void	push_swap_sort(t_list	**stack_a, t_list **stack_b, int max);
void	radix_sort(t_list **stack_a, t_list **stack_b, int max);
void	small_sort(t_list **stack_a, t_list **stack_b, int max);
void	sort_two(t_list **stack);
void	sort_three(t_list **stack);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);

/* PUSH SWAP MODULES */
t_list	**push(t_list **stack_source, t_list **stack_target);
int		pb(t_list **stack_source, t_list **stack_target);
int		pa(t_list **stack_source, t_list **stack_target);

int		swap(t_list **stack);
int		sb(t_list **stack);
int		sa(t_list **stack);
int		ss(t_list **stack_a, t_list **stack_b);

int		rotate(t_list **stack);
int		rotaterev(t_list **stack);
int		rra(t_list **stack);
int		ra(t_list **stack);

#endif
