#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	if (ch == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
