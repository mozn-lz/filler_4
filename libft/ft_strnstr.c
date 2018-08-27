/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:12:04 by msefako           #+#    #+#             */
/*   Updated: 2018/06/15 17:10:45 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t counter;

	if (*needle == '\0')
		return ((char *)haystack);
	counter = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[counter])
			counter++;
		else
			counter = 0;
		if (needle[counter] == '\0')
			return ((char*)haystack - counter + 1);
		haystack++;
		len--;
	}
	return (NULL);
}
