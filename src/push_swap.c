#include "../incl/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc <= 1)
		return (EXIT_SUCCESS);
	stack_a = stack_load(argc, argv);
	stack_b = NULL;

	index_sort_stack(argc, argv, stack_a);

	stack_a = push_swap_sort(stack_a, stack_b);
	ft_lstclear(&stack_a, &del);
	
	return (EXIT_SUCCESS);
}
