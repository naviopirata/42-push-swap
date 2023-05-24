#include "../incl/push_swap.h"

int	swap(t_list **stack)
{
	//TODO: add err treatment
	t_list	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	aux->next = (*stack)->next;
	(*stack)->next = aux;
	return (EXIT_SUCCESS);
}

int	sb(t_list **stack)
{
	if(!swap(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	sa(t_list **stack)
{
	if(!swap(stack))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	//TODO: add err treatment
	sa(stack_a);
	sb(stack_b);
	return(EXIT_SUCCESS);
}
