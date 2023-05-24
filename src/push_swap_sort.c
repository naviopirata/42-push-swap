#include "../incl/push_swap.h"

t_list	*push_swap_sort(t_list	*stack_a, t_list *stack_b)
{
	ft_printf("Stack A:\n");
	ft_lstiter(stack_a, &print_node);

	push(&stack_a, &stack_b);

	ft_printf("Stack A:\n");
	ft_lstiter(stack_a, &print_node);

	ft_lstclear(&stack_b, &del);
	return (stack_a);
}
