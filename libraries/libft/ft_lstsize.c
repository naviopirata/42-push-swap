/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:22:53 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/01 08:11:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list_src)
{
	int		size;
	t_list	*aux;

	size = 0;
	aux = list_src;
	while (aux)
	{
		aux = aux->next;
		size++;
	}
	return (size);
}
