#include "../incl/push_swap.h"

t_list	*push_swap_sort(t_list	*stack_a, t_list *stack_b, int max)
{
	int	exp;

	exp = 1;
	while ((max / exp) > 0) {
		while (((t_cell *)stack_a->next->content)->index) {
			if (((((t_cell *)stack_a->content)->index) / exp) % 10 > 
				((((t_cell *)stack_a->next->content)->index) / exp) % 10) {
				sa(&stack_a);
				break;
			}
			else if (((((t_cell *)stack_a->content)->index) / exp) % 10 > 
					((((t_cell *)ft_lstlast(stack_a)->content)->index) / exp) % 10) {
				ra(&stack_a);
				break;
			}
			else 
				pb(&stack_a, &stack_b);
		}
		exp *= 10;
	}
	ft_printf("Stack A:\n");
	ft_lstiter(stack_a, &print_node);
	ft_printf("\n");
	ft_printf("Stack B:\n");
	ft_lstiter(stack_b, &print_node);
	ft_lstclear(&stack_a, &del);
	ft_lstclear(&stack_b, &del);

	return (NULL);
}
