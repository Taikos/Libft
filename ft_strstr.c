#include "libft.h"

char	*ft_strstr(const char *src, const char *tofind)
{
	int i;
	int j;

	i = 0;
	if (tofind[0] == '\0')
		return ((char*)src);
	while (src[i] != '\0')
	{
		j = 0;
		while (tofind[j] == src[i + j])
		{
			if (tofind[j + 1] == '\0')
				return ((char *)(src + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
