#include <push_swap.h>
// TODO: desenhar ponteiro e ponteiro de ponteiro

t_list	**push(t_list **stack_source, t_list **stack_target)
{
	t_list	*aux;

	aux = *stack_source;
	*stack_source = (*stack_source)->next;
	aux->next = *stack_target;
	*stack_target = aux;
	return (stack_target);
}
