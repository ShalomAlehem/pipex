#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (int)ft_strlen(s1))
	{
		dest[i] = s1[i];
		i++;
	}	
	while (i < (int)((ft_strlen(s1) + ft_strlen(s2))))
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
