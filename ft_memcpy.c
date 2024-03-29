#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*temp;

	temp = (unsigned char *)src;
	dt = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dt[i] = temp[i];
		i++;
	}
	return (dt);
}
