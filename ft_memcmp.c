#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((t1[i] < t2[i]) || (t1[i] > t2[i]))
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}
