#include "../incl/push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (EXIT_SUCCESS);
	push_swap_init(argc, argv);
	return (EXIT_SUCCESS);
}
