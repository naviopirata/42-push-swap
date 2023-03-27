#include <push_swap.h>

t_list	*stack_load(int max, char *vec[])
{
	t_cell	*target[max];
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < max - INDEXADJ)
	{
		target[i] = (t_cell *)malloc(sizeof(t_cell));
		target[i]->value = ft_atoi(vec[i + INDEXADJ]);
		target[i]->index = i + INDEXADJ;
		ft_lstadd_back(&list, ft_lstnew(&target[i]->value));
		i++;
	}
	return (list);
}
