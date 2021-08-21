#include "libft.h"

int	ft_isprint(int symb)
{
	if (symb >= ' ' && symb <= '~')
		return (1);
	else
		return (0);
}
