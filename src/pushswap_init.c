#include "../incl/push_swap.h"

int	pushswap_init(int argc, int *vec)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = stack_load((argc - 1), vec);
	stack_b = NULL;
	stack_sort_id(argc, vec, stack_a);
	pushswap_sort(stack_a, stack_b, (argc - 1));
	return (EXIT_SUCCESS);
}
