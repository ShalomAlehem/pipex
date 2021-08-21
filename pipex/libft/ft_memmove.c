#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned const char	*s1;
	unsigned char		*s2;
	size_t				i;

	s1 = (unsigned const char *)src;
	s2 = (unsigned char *)dest;
	if (!s1 && !s2)
		return (NULL);
	i = 0;
	if (s2 > s1)
		while (i++ != len)
			s2[len - i] = s1[len - i];
	else
	{
		i = len;
		while (i != 0)
		{
			s2[len - i] = s1[len - i];
			i--;
		}
	}
	return (dest);
}
