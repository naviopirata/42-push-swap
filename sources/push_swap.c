/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:23 by ddiniz            #+#    #+#             */
/*   Updated: 2023/03/01 19:20:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (EXIT_SUCCESS);
	load_args(argc, argv);
	return (EXIT_SUCCESS);
}
