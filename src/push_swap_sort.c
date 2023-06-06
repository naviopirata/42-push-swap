#include "../incl/push_swap.h"

static int	is_ordered(t_list *stack)
{
	t_list	*aux;

	aux = stack;
	while (aux) {
		if (aux->next && (((t_cell *)aux->content)->index > ((t_cell *)aux->next->content)->index)) {
			return (0);
		}
		aux = aux->next;
	}
	return (1);
}

t_list	*push_swap_sort(t_list	*stack_a, t_list *stack_b, int max)
{
	int	exp;
	int	count;

	exp = 1;
	while ((max / exp) > 0) {
		if (is_ordered(stack_a)) {
			break;
		}
		count = max - 1;
		while(count > 0) {
			if ((((t_cell *)stack_a->content)->index / exp) % 10 < (((t_cell *)stack_a->next->content)->index / exp) % 10) {
				sa(&stack_a);
				pb(&stack_a, &stack_b);
				count--;
			}
			else {
				ra(&stack_a);
				count--;
			}
		}
		while (stack_b) {
			pa(&stack_b, &stack_a);
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
