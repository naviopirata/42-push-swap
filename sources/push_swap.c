#include <push_swap.h>

void	vec_print(int	*vec, int max)
{
	int	i;

	ft_printf("Vec: %c\n", 0);
	i = 0;
	while (i < max)
	{
		ft_printf("%d\n", vec[i]);
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc <= 1)
		return (EXIT_SUCCESS);
	stack_a = stack_load(argc, argv);
	stack_b = stack_load(argc, argv);

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(stack_a, &print_node);

	ft_printf("Stack B: %c\n", 0);
	ft_lstiter(stack_b, &print_node);

	push(&stack_a, &stack_b);

	ft_printf("Stack A: %c\n", 0);
	ft_lstiter(stack_a, &print_node);
	ft_printf("New stack B: %c\n", 0);
	ft_lstiter(stack_b, &print_node);

	ft_lstclear(&stack_a, &del);
	ft_lstclear(&stack_b, &del);
	
	return (EXIT_SUCCESS);
}
