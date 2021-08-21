#include "libft.h"

static int	check_sign(const char *str, int i, int *negative)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*negative = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			negative;
	long long	res;

	i = 0;
	negative = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	i = check_sign(str, i, &negative);
	while (ft_isdigit(str[i]))
		res = (res * 10) + str[i++] - 48;
	if (i > 19 && negative == 1)
		return (-1);
	else if (i > 19 && negative == -1)
		return (0);
	return (res * negative);
}
