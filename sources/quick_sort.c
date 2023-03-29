#include "push_swap.h"

static t_list	*partition(t_list *first, t_list *last)
{
	t_list	*pivot = first;
	t_list	*front = first;
	void	*temp = 0; //TODO: ???

	while (front != NULL && front != last) 
	{
		if (front->content < last->content) 
		{
			pivot = first;
			temp = first->content;
			first->content = front->content;
			front->content = temp;
			first = first->next;
		}
		front = front->next;
	}
	temp = first->content;
	first->content = last->content;
	last->content = temp;
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
