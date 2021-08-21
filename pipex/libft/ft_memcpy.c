#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	if (!dest && !src)
		return (NULL);
	i = 0;
	a = (char *)dest;
	b = (char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
