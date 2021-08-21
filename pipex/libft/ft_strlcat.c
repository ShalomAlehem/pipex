#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*cpdst;
	char	*cpsrc;
	size_t	i;
	size_t	dstlen;

	cpdst = dst;
	cpsrc = (char *)src;
	i = dstsize;
	while (i-- != 0 && *dst != '\0')
		dst++;
	dstlen = dst - cpdst;
	i = dstsize - dstlen;
	if (i-- == 0)
		return (dstlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (i != 0)
		{
			*dst++ = *src;
			i--;
		}
		src++;
	}
	*dst = '\0';
	return (dstlen +(src - cpsrc));
}
