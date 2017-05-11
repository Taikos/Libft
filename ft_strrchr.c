#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if ((char)c == '\0' || s[i] == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
