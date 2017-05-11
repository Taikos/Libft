#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	if (!(a = (unsigned char *)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (i < size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
