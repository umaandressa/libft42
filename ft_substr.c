#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (ft_strlen(s) <= start)
		return ((char *)ft_calloc(sizeof(char), 1));
	sub = (char *)ft_calloc(sizeof(char), ++len);
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}
