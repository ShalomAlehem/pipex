#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*p;

	p = (char *)dest;
	while (len > 0)
	{
		p[len - 1] = (unsigned char)c;
		len--;
	}
	return (dest);
}
