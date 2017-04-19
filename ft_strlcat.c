/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguerin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 11:28:32 by arguerin          #+#    #+#             */
/*   Updated: 2017/04/18 19:56:07 by arguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t sid;
	size_t sis;

	sid = ft_strlen(dest);
	sis = ft_strlen(src);
	if (n < sid)
		return (sis + n);
	else if (sid < n)
	{
		ft_strncat(dest, src, n);
		dest[n - 1] = '\0';
	}
	return (sid + sis);
}
