#include "../incl/push_swap.h"

static void	swap_cells(t_list *nodea, t_list *nodeb)
{
	void	*temp;

	temp = nodea->content;
	nodea->content = nodeb->content;
	nodeb->content = temp;
	return ;
}

static t_list	*partition(t_list *first, t_list *last)
{
	t_list	*pivot = first;
	t_list	*front = first;

	while (front != NULL && front != last) 
	{
		if (*(int *)front->content < *(int *)last->content) 
		{
			pivot = first;
			swap_cells(first, front);
			first = first->next;
		}
		front = front->next;
	}
	swap_cells(first, last);
	return(pivot);
}

void	quick_sort(t_list *first, t_list *last)
{
	t_list	*pivot;

	if(first == last)
		return ;
	pivot = partition(first, last);
	if(pivot != NULL && pivot->next != NULL)
		quick_sort(pivot->next, last);
	if(pivot != NULL && first != pivot)
		quick_sort(first, pivot);
	return ;
}

void	quick_sort_like(t_list **stack_a)
{
	t_list	*pivot;

	if((*stack_a) == ft_lstlast((*stack_a)))
		return ;
	pivot = partition(stack_a);
	if(pivot != NULL && pivot->next != NULL)
		quick_sort_like(stack_a);
	if(pivot != NULL && (*stack_a) != pivot)
		quick_sort_like(stack_a);
	return ;
}
