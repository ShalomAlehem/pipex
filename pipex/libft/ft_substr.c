#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	min_len;
	char			*dest;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		min_len = ft_strlen(&s[start]);
		if (min_len < len)
			len = min_len;
		dest = malloc((len + 1) * sizeof(char));
		if (dest == NULL)
			return (NULL);
		i = start;
		while (s[i] && (i - start) < len)
		{
			dest[i - start] = s[i];
			i += 1;
		}
		dest[i - start] = '\0';
		return (dest);
	}
}
