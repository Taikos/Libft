#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (temp);
}
