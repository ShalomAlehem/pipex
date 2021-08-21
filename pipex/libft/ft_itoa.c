#include "libft.h"

static int	ft_nbr_len(int n)
{
	int	d;

	d = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		d++;
	}
	return (d);
}

static char	*ft_plus_int(int n, int len)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	else
	{
		s[len] = '\0';
		len--;
		while (len >= 0)
		{
			s[len] = ((n % 10) + '0');
			n = n / 10;
			len--;
		}
		return (s);
	}
	return (NULL);
}

static char	*ft_minus_int(int n, int len)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (len + 2));
	if (s == NULL)
		return (NULL);
	else
	{
		len++;
		s[len] = '\0';
		len--;
		s[0] = '-';
		while (len > 0)
		{
			s[len] = ((n % 10) + '0');
			n = n / 10;
			len--;
		}
		return (s);
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_nbr_len(n);
	if (n >= 0)
		return (s = ft_plus_int(n, len));
	return (s = ft_minus_int((n * -1), len));
}
