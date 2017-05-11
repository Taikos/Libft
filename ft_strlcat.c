#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*tdest;
	const char	*tsrc;
	size_t		i;
	size_t		sid;
	size_t		sis;

	tdest = dest;
	tsrc = src;
	i = 0;
	while ((i++ < n) && *tdest)
		tdest++;
	sid = (size_t)tdest - (size_t)dest;
	sis = ft_strlen(src);
	if (sid >= n)
		return (n + sis);
	while ((sid < --n) && *tsrc)
		*tdest++ = *tsrc++;
	while (*tsrc)
		tsrc++;
	*tdest = '\0';
	sis = (size_t)tsrc - (size_t)src;
	return (sid + sis);
}
