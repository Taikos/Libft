#include "libft.h"

char	*ft_strnstr(const char *src, const char *tofind, size_t n)
{
	int i;
	int j;

	i = 0;
	if (tofind[0] == '\0')
		return ((char*)src);
	while (src[i] != '\0' && n > 0)
	{
		j = 0;
		while (tofind[j] == src[i + j] && (n - j > 0))
		{
			if (tofind[j + 1] == '\0')
				return ((char *)(src + i));
			j++;
		}
		i++;
		n--;
	}
	return (NULL);
}
