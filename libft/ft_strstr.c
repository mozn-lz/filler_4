/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:11:16 by msefako           #+#    #+#             */
/*   Updated: 2018/06/15 17:11:28 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int hc;
	unsigned int nc;
	unsigned int i;

	hc = 0;
	nc = 0;
	i = ft_strlen((char*)needle);
	if (i == 0)
		return ((char*)haystack);
	while (haystack[hc])
	{
		while (needle[nc] == haystack[hc + nc])
		{
			if (nc == i - 1)
				return ((char*)haystack + hc);
			nc++;
		}
		nc = 0;
		hc++;
	}
	return (0);
}
