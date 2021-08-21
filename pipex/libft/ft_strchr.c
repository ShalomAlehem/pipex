#include "libft.h"

char	*ft_strchr (const char *str, int ch)
{
	char	*s;

	s = (char *)str;
	while (*s != (char)ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
