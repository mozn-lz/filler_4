/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:52:50 by msefako           #+#    #+#             */
/*   Updated: 2018/06/15 16:25:19 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					counter;
	const unsigned char		*source;
	unsigned char			*destination;

	counter = 0;
	source = src;
	destination = dest;
	while (counter < n)
	{
		destination[counter] = source[counter];
		if (source[counter] == (unsigned char)c)
			return (dest + counter + 1);
		counter++;
	}
	return (NULL);
}
