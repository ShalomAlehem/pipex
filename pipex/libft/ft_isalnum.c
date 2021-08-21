#include "libft.h"

int	ft_isalnum(int symb)
{
	return (ft_isalpha(symb) || ft_isdigit(symb));
}
