#include "../incl/push_swap.h"

int	*index_sort_vec(int argc, char **argv)
{
	int	*arr;

	arr = vec_load(argc, argv);
	quick_sort_vec(arr, 0, argc - 2);
	return (arr);
}
