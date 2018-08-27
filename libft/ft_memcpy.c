/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:53:36 by msefako           #+#    #+#             */
/*   Updated: 2018/06/15 16:30:53 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destblock;
	char	*srcblock;

	destblock = (char*)dst;
	srcblock = (char*)src;
	while (n--)
	{
		*destblock++ = *srcblock++;
	}
	return (dst);
}
