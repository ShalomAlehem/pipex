#include "libft.h"

int	ft_toupper(int character)
{
	if (character >= 'a' && character <= 'z')
		return (character - 'a' + 'A');
	return (character);
}
