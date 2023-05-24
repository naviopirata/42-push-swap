#include "../incl/push_swap.h"

void	index_sort_stack(int argc, char **argv, t_list *stack)
{
	int	*arr;
	t_list	*aux;
	int	i;

	arr = index_sort_vec(argc, argv);
	i = 0;
	while (++i < argc) {
		aux = stack;
		while (aux) {
			if (arr[i - 1] == ((t_cell *)aux->content)->value) 
				((t_cell *)aux->content)->index = i;
			aux = aux->next;
		}
	}
	free(arr);
	return ;
}
