#include "libft.h"

int	ft_countdigits(int n)
{
	if (n == 0)
		return (0);
	return (1 + ft_countdigits(n / 10));
}

char	*ft_itoa(int n)
{
	int		size;
	char	*number;

	size = ft_countdigits(n / 10) + 1;
	if (n < 0)
		size++;
	number = (char *)malloc(size + 1);
	if (!number)
		return (0);
	if (!n)
		number[0] = '0';
	if (n == -2147483648)
		return (number = ft_strdup("-2147483648"));
	if (n < 0)
	{
		number[0] = '-';
		n = -n;
	}
	number[size] = 0;
	while (n)
	{
		number[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (number);
}
