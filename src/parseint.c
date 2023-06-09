/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:14:21 by ddiniz            #+#    #+#             */
/*   Updated: 2023/06/08 18:33:50 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static	long int	number_create(const char *str, int *digits)
{
	long int	number;

	number = 0;
	while (*str && (ft_isdigit(*str)) && *digits < 12)
	{
		number = number * 10 + (*str - 48);
		str++;
		(*digits)++;
	}
	return (number);
}

int	parseint(const char *str)
{
	long int	sign;
	long int	number;
	int			digits;

	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if ((*str == 43) || (*str == 45) || ft_isdigit(*str))
	{
		sign = 1;
		if (*str == 45)
			sign = -1;
		if ((*str == 45) || (*str == 43))
			str++;
		digits = 0;
		number = number_create(str, &digits);
		if (digits > 10)
			return (0);
		number *= sign;
		if ((number < (long int)INT_MIN) || (number > (long int)INT_MAX))
			return (0);
		return (1);
	}
	return (0);
}
