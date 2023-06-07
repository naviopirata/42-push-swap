#include "../incl/push_swap.h"

static int	is_ordered_a(t_list *stack, int exp)
{
	t_list	*aux;

	aux = stack;
	while (aux) {
		if (aux->next && ((((t_cell *)aux->content)->id / exp) > (((t_cell *)aux->next->content)->id / exp) )) {
			ft_printf("%d > %d\n", ((t_cell *)aux->content)->id,((t_cell *)aux->next->content)->id);
			return (0);
		}
		aux = aux->next;
	}
	return (1);
}

static int	is_ordered_b(t_list *stack, int exp)
{
	t_list	*aux;

	aux = stack;
	while (aux) {
		if (aux->next && ((((t_cell *)aux->content)->id / exp) % 10 > (((t_cell *)aux->next->content)->id / exp) % 10)) {
			ft_printf("%d > %d\n", ((t_cell *)aux->content)->id,((t_cell *)aux->next->content)->id);
			return (0);
		}
		aux = aux->next;
	}
	return (1);
}

t_list	*pushswap_sort(t_list	*stack_a, t_list *stack_b, int max)
{
	int	exp;
	int	count;

	exp = 1;
	if (is_ordered_a(stack_a, exp))
	while ((max / exp) > 0) {
		if (is_ordered_b(stack_a, exp))
			break;
		while (1) {
			count = max - 1;
			while(count > 0) {
				if ((((t_cell *)stack_a->content)->id / exp) % 10 < (((t_cell *)stack_a->next->content)->id / exp) % 10) {
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
				if (is_ordered_b(stack_a, exp))
					break;
			}
		}
		exp *= 10;
	}
	ft_printf("Stack A:\n");
	ft_lstiter(stack_a, &node_print);
	ft_printf("\n");
	ft_printf("Stack B:\n");
	ft_lstiter(stack_b, &node_print);
	ft_lstclear(&stack_a, &node_del);
	ft_lstclear(&stack_b, &node_del);

	return (NULL);
}
