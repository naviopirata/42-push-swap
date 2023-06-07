#include "../incl/push_swap.h"

t_list	*stack_load(int max, int *vec)
{
	t_cell	*node[max];
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < max)
	{
		node[i] = (t_cell *)malloc(sizeof(t_cell));
		node[i]->value = vec[i];
		node[i]->id = i + 1;
		ft_lstadd_back(&list, ft_lstnew(&node[i]->value));
		i++;
	}
	return (list);
}