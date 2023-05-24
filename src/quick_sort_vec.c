#include "../incl/push_swap.h"

static int	partition_create(int *vec, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	aux;

	pivot = vec[high];
	j = (low - 1);
	i = low;
	while(i <= high - 1)
	{
		if(vec[i] < pivot)
		{
			j++;
			aux = vec[i];
			vec[i] = vec[j];
			vec[j] = aux;
		}
		i++;
	}
	aux = vec[high];
	vec[high] = vec[j + 1];
	vec[j + 1] = aux;
	return(j + 1);
}

void	quick_sort_vec(int *vec, int low, int high)
{
	static int	part_index;

	if (low < high)
	{
		part_index = partition_create(vec, low, high);
		quick_sort_vec(vec, low, part_index - 1);
		quick_sort_vec(vec, part_index + 1, high);

	}
	return ;
}

