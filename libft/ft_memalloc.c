/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:17:46 by msefako           #+#    #+#             */
/*   Updated: 2018/06/01 15:10:16 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*rtn;

	rtn = malloc(size);
	if (size != 0)
		if (rtn)
		{
			ft_bzero(rtn, size);
			return (rtn);
		}
	return (NULL);
}
