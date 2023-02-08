/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:01:28 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/01 08:28:40 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list_src)
{
	t_list	*aux;
	t_list	*last;

	aux = list_src;
	last = list_src;
	while (aux)
	{
		last = aux;
		aux = aux->next;
	}
	return (last);
}
