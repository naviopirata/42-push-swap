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

t_list	**push(t_list **stack_source, t_list **stack_target);
int	pb(t_list **stack_source, t_list **stack_target);
int	pa(t_list **stack_source, t_list **stack_target);

int	swap(t_list **stack);
int	sb(t_list **stack);
int	sa(t_list **stack);
int	ss(t_list **stack_a, t_list **stack_b);

int	rotate(t_list **stack);
int	ra(t_list **stack);
int	rb(t_list **stack);
int	rr(t_list **stack_a, t_list **stack_b);

t_list	*stack_load(int index, char *vec[]);
int	*vec_load(int max, char *vec[]);
int	vec_unload(t_cell *aux[], int max);
void	quick_sort_vec(int *vec, int low, int high);
// int	swap(t_list *stack);
// int	swap_all(t_list *stack_a, t_list *stack_b);
// int	rotate(t_list *stack);
// int	rotate_all(t_list *stack_source, t_list *stack_target);
// int	rotate_rev(t_list *stack);
// int	rotate_rev_all(t_list *stack_source, t_list *stack_target);

#endif
