#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft.h"

typedef struct	s_cell {
	int	value;
	int	id;
} t_cell;

/* AUXILIAR METHODS */
void	node_del(void *content);
void	node_print(void *node);
int	parseint(const char *str);

/* VECTOR MODULES */
int	*argv_load(int max, char *vec[]);
int	*vec_sort(int argc, char **argv);
int	*vec_load(int max, char *vec[]);
void	vec_quick_sort(int *vec, int low, int high);

/* PUSH SWAP MODULES */
/* void	quick_sort_like(t_list **stack_a);  */
t_list	*stack_load(int index, int *vec);
void	stack_sort_id(int argc, int *vec, t_list *stack);
int	pushswap_init(int argc, int *vec);
t_list	*pushswap_sort(t_list	*stack_a, t_list *stack_b, int max);

/* PUSH SWAP MODULES */
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

#endif
