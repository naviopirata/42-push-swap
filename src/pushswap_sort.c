#include "../incl/push_swap.h"

// static void	print_stacks(t_list *stack_a, t_list *stack_b)
// {
// 	t_list *auxa;
// 	t_list *auxb;
//
// 	auxa = stack_a;
// 	auxb = stack_b;
// 	ft_printf("--- steps start ---\n");
// 	while (auxa) {
// 		if (auxa && auxb) {
// 			ft_printf("%d\t%d\n", ((t_cell *)auxa->content)->id, ((t_cell *)auxb->content)->id);
// 			auxa = auxa->next;
// 			auxb = auxb->next;
// 		}
// 		else {
// 			ft_printf("%d\t\n", ((t_cell *)auxa->content)->id);
// 			auxa = auxa->next;
// 		}
// 	}
// 	ft_printf("--- steps end ---\n");
// 	return;
// }

static int	is_ordered(t_list **stack)
{
	t_list	*aux;
	t_cell	*node;
	t_cell	*nodenext;

	aux = *stack;
	while (aux)
	{
		if (aux->next) {
			node = (t_cell *)aux->content;
			nodenext = (t_cell *)aux->next->content;
			if (node->value > nodenext->value) {
				return (0);
			}
		}
		aux = aux->next;
	}
	return (1);
}

t_list	*pushswap_sort(t_list **stack_a, t_list **stack_b, int max)
{
	int	i;
	int	j;

	i = 0;
	while (!is_ordered(stack_a)) {
	// while (i == 0) {
		j = 0;
		while((j < max) && !is_ordered(stack_a)) {
		// while(j < max) {
			// ft_lstiter(stack_a, &node_print);
			if ((((t_cell *)(*stack_a)->content)->id >> i) & 1) {
				ra(stack_a);
				// print_stacks(stack_a, stack_b);
			}
			else {
				pb(stack_a, stack_b);
				// print_stacks(stack_a, stack_b);
			}
			j++;
			// sleep(1);
		}
		while (*stack_b) {
			pa(stack_b, stack_a);
			// print_stacks(stack_a, stack_b);
			// sleep(1);
		}
		i++;
	}
	ft_printf("Stack A after:\n");
	ft_lstiter(*stack_a, node_print);

	return (NULL);
}
