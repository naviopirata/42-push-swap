#include "../incl/push_swap.h"
#include <unistd.h>
#include <stdio.h>

static void	print_stacks(t_list *stack_a, t_list *stack_b)
{
	t_list *auxa;
	t_list *auxb;

	auxa = stack_a;
	auxb = stack_b;
	printf("--- steps start ---\n");
	while (auxa) {
		if (auxa && auxb) {
			printf("%d\t%d\n", ((t_cell *)auxa->content)->id, ((t_cell *)auxb->content)->id);
			auxa = auxa->next;
			auxb = auxb->next;
		}
		else {
			printf("%d\t\n", ((t_cell *)auxa->content)->id);
			auxa = auxa->next;
		}
	}
	printf("--- steps end ---\n");
	return;
}

static int	is_ordered(t_list *stack)
{
	t_list	*aux;

	aux = stack;
	while (aux) {
		if (aux->next && (((t_cell *)aux->content)->id > ((t_cell *)aux->next->content)->id)) {
			// ft_printf("%d > %d\n", ((t_cell *)aux->content)->id, ((t_cell *)aux->next->content)->id);
			return (0);
		}
		aux = aux->next;
	}
	return (1);
}

t_list	*pushswap_sort(t_list	*stack_a, t_list *stack_b, int max)
{
	int	i;
	int	j;

	if (is_ordered(stack_a)) {
		ft_printf("===== IT'S ORDERED! =====\n\n");
		ft_printf("It is ordered!\n");
		ft_lstiter(stack_a, &node_print);
		ft_lstclear(&stack_a, &node_del);
		ft_lstclear(&stack_b, &node_del);
		return (NULL);
	}
	ft_printf("===== STACK A BEFORE =====\n\n");
	ft_lstiter(stack_a, &node_print);
	ft_printf("\n\n");
	sleep(4);
	ft_printf("===== STEP BY STEP =====\n\n");
	i = 0;
	while (!is_ordered(stack_a)) {
		j = 0;
		while((j < max) && !is_ordered(stack_a)) {
			ft_lstiter(stack_a, &node_print);
			if ((((t_cell *)stack_a->content)->id >> i) & 1) {
				ra(&stack_a);
				print_stacks(stack_a, stack_b);
			}
			else {
				pb(&stack_a, &stack_b);
				print_stacks(stack_a, stack_b);
			}
			j++;
			sleep(1);
		}
		while (stack_b) {
			pa(&stack_b, &stack_a);
			print_stacks(stack_a, stack_b);
			sleep(1);
		}
		i++;
	}
	ft_printf("Stack A after:\n");
	ft_lstiter(stack_a, &node_print);
	ft_lstclear(&stack_a, &node_del);
	ft_lstclear(&stack_b, &node_del);

	return (NULL);
}
