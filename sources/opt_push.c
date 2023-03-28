#include <push_swap.h>

t_list	**push(t_list **stack_source, t_list **stack_target)
{
	t_list	*aux;

	aux = *stack_source;
	*stack_source = (*stack_source)->next;
	aux->next = *stack_target;
	*stack_target = aux;
	return (stack_target);
}

int	pa(t_list **stack_source, t_list **stack_target)
{
	if(!push(stack_source, stack_target))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	pb(t_list **stack_source, t_list **stack_target)
{
	if(!push(stack_source, stack_target))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
