#include "../incl/push_swap.h"

int	parseint(const char *str)
{
	long long int	sign;
	long long int	number;
	short		digits;

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
		number = 0;
		while (*str && (ft_isdigit(*str)) && digits < 12)
		{
			number = number * 10 + (*str - 48);
			str++;
			digits++;
		}
		if (digits > 10) 
			return (0);
		number *= sign;
		if (number < (long long int)INT_MIN || number > (long long int)INT_MAX) {
			return (0);
		}
		return (1);
	}
	return (0);
}
