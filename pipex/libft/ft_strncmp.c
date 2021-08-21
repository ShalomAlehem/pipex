#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (str1[i] != '\0' && str1[i] == str2[i] && i < len - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
