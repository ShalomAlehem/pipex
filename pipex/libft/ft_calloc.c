#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	nbyte;
	void			*dest;

	nbyte = count * size;
	dest = malloc(nbyte);
	if (dest)
		ft_memset(dest, 0, nbyte);
	return (dest);
}
