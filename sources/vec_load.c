#include <push_swap.h>

int	*vec_load(int max, char *vec[])
{
	int	*target;
	int		i;

	i = 0;
	target = (int *)malloc((max - 1)*sizeof(int));
	while (i < max - 1)
	{
		target[i] = ft_atoi(vec[i + 1]);
		i++;
	}
	return (target);
}
