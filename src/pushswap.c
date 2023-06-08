#include "../incl/push_swap.h"

int	main(int argc, char *argv[])
{
	int	*arr;

	arr = NULL;
	if (argc < 2)
		return (EXIT_SUCCESS);
	arr = argv_load(argc, argv);
	if (arr)
		pushswap_init(argc, argv, arr);
	free(arr);
	return (EXIT_SUCCESS);
}
