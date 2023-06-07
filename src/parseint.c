#include "../incl/push_swap.h"

int	parseint(const char *str)
{
	long long int	sign;
	long long int	number;

	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if ((*str == 43) || (*str == 45) || ft_isdigit(*str))
	{
		sign = 1;
		if (*str == 45)
			sign = -1;
		if ((*str == 45) || (*str == 43))
			str++;
		number = 0;
		while (*str && (ft_isdigit(*str)))
		{
			number = number * 10 + (*str - 48);
			str++;
		}
		number *= sign;
		if (number < (long long int)INT_MIN || number > (long long int)INT_MAX) {
			return (0);
		}
		return (1);
	}
	return (0);
}
