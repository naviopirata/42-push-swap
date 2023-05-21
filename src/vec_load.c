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
