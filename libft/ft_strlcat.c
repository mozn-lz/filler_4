/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:39:31 by msefako           #+#    #+#             */
/*   Updated: 2018/06/15 16:50:36 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	size;

	i = 0;
	dlen = 0;
	size = dstsize;
	while (dst[dlen] && size-- != 0)
		dlen++;
	size = dstsize - dlen;
	if (size == 0)
		return (dlen + ft_strlen((char*)src));
	while (src[i] != '\0')
	{
		if (size != 1)
		{
			dst[dlen + i] = src[i];
			size--;
		}
		i++;
		dst[dlen + i] = '\0';
	}
	return (dlen + i);
}
