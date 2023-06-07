#include "../incl/push_swap.h"

void	node_del(void *content)
{
	free(content);
	content = NULL;
	(void)content;
	return ;
}
