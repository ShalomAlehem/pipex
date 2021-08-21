#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*str2)
		return ((char *)str1);
	while (i < len && str1[i] != '\0')
	{
		if (str1[i] == str2[0])
		{
			while (i + j < len && str1[i + j] == str2[j] && str2[j] != '\0')
				j++;
			if (str2[j] == '\0')
				return ((char *)str1 + i);
		}
		i++;
	}
	return (0);
}
