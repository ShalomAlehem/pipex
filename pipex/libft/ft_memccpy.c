#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*a;
	unsigned char		*b;
	size_t				i;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (i < n)
	{
		a[i] = b[i];
		if (a[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
