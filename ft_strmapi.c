#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!*s)
		return (0);
	s2 = malloc(ft_strlen(s) + 1);
	if (!s2)
		return (0);
	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		++i;
	}
	s2[i] = 0;
	return (s2);
}
