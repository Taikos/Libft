#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	if (!(a = (unsigned char *)malloc(sizeof(unsigned char) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		a[i] = '\0';
		i++;
	}
	a[i] = '\0';
	return ((char *)a);
}
