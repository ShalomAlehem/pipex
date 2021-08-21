#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*buf1;
	char	*buf2;

	i = 0;
	buf1 = (char *)s1;
	buf2 = (char *)s2;
	while (i < n)
	{
		if (buf1[i] != buf2[i])
			return ((unsigned char)buf1[i] - (unsigned char)buf2[i]);
		i++;
	}
	return (0);
}
