/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_load.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:15:03 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/12 01:22:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdlib.h>

static int	partition_create(int *vec, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	aux;

	pivot = vec[high];
	j = (low - 1);
	i = low;
	while (i <= high - 1)
	{
		if (vec[i] < pivot)
		{
			j++;
			aux = vec[i];
			vec[i] = vec[j];
			vec[j] = aux;
		}
		i++;
	}
	aux = vec[high];
	vec[high] = vec[j + 1];
	vec[j + 1] = aux;
	return (j + 1);
}

void	vec_quick_sort(int *vec, int low, int high)
{
	static int	part_index;

	if (low < high)
	{
		part_index = partition_create(vec, low, high);
		vec_quick_sort(vec, low, part_index - 1);
		vec_quick_sort(vec, part_index + 1, high);
	}
	return ;
}

int	*vec_load(int max, char *vec[])
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc((max - 1) * sizeof(int));
	while (i < max - 1)
	{
		arr[i] = ft_atoi(vec[i + 1]);
		i++;
	}
	return (arr);
}

int	*vec_sort(int argc, char **argv)
{
	int	*arr;

	arr = vec_load(argc, argv);
	vec_quick_sort(arr, 0, argc - 2);
	return (arr);
}

int	*argv_load(int max, char *vec[])
{
	int	*arr;
	int	i;

	if (!check_int(max, vec))
	{
		ft_printf("Error\n");
		return (NULL);
	}
	arr = vec_sort(max, vec);
	i = 0;
	while (i < max - 2)
	{
		if (arr[i] == arr[i + 1])
		{
			ft_printf("Error\n");
			free(arr);
			return (NULL);
		}
		i++;
	}
	return (arr);
}
