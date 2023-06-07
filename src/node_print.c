#include "../incl/push_swap.h"

void	node_print(void *node)
{
	ft_printf("%d %d\n", ((t_cell *)node)->value, ((t_cell *)node)->id);
	return ;
}
