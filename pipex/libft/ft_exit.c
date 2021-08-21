#include "libft.h"

void	ft_exit(char *errormessage)
{
	write(2, errormessage, ft_strlen(errormessage));
	write(2, "\n", 1);
	exit(0);
}
