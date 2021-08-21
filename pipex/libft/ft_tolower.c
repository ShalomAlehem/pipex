#include "libft.h"

int	ft_tolower(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (character - 'A' + 'a');
	return (character);
}
