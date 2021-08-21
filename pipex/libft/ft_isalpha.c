#include "libft.h"

int	ft_isalpha(int symb)
{
	return (('a' <= symb && symb <= 'z') || ('A' <= symb && symb <= 'Z'));
}
