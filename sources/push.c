#include <push_swap.h>
// TODO: desenhar ponteiro e ponteiro de ponteiro

int	push(t_list **stack_source, t_list **stack_target)
{

	ft_lstadd_front(stack_target, *stack_source);
	*stack_source = (*stack_source)->next;
	return (EXIT_SUCCESS);
}
