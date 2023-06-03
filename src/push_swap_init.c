#include "../incl/push_swap.h"
#include <stdlib.h>

int	push_swap_init(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = stack_load(argc, argv);
	stack_b = NULL;
	index_sort_stack(argc, argv, stack_a);
	push_swap_sort(stack_a, stack_b, argc - INDEXADJ);
	return (EXIT_SUCCESS);
}
