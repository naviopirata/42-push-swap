#include <push_swap.h>

void	del(void *content)
{
	free(content);
	content = NULL;
	(void)content;
	return ;
}
