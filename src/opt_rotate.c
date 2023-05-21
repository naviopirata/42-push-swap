#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list *aux;
	t_list *last;

	aux = *stack;
	*stack = (*stack)->next;
	last = ft_lstlast(*stack);
	last->next = aux;
	aux->next = NULL;
	return(EXIT_SUCCESS);
}

int	ra(t_list **stack)
{
	if(!rotate(stack))
		return(EXIT_FAILURE);
	return(EXIT_SUCCESS);
}

int	rb(t_list **stack)
{
	if(!rotate(stack))
		return(EXIT_FAILURE);
	return(EXIT_SUCCESS);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	return(EXIT_SUCCESS);
}
