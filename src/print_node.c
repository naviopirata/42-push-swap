#include "../incl/push_swap.h"

void	print_node(void *node)
{
	ft_printf("%d %d\n", ((t_cell *)node)->value, ((t_cell *)node)->index);
	return ;
}
