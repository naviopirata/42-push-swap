#include "../incl/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc <= 1)
		return (EXIT_SUCCESS);
	stack_a = stack_load(argc, argv);
	stack_b = NULL;

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(stack_a, &print_node);

//	quick_sort_like(&stack_a);

	ft_printf("Stack A sorted: %c\n", 0);
	ft_lstiter(stack_a, &print_node);

	ft_lstclear(&stack_a, &del);
	ft_lstclear(&stack_b, &del);
	
	return (EXIT_SUCCESS);
}
