#include "libft.h"

void	ft_freecharmatrix(char **matrix)
{
	int	i;

	i = ft_charmatrixlen(matrix) - 1;
	while (i >= 0)
		free(matrix[i--]);
}

int	ft_charmatrixlen(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}
