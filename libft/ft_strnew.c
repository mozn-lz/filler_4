/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:34:23 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 21:11:27 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = ft_memalloc(size + 1);
	if (s != NULL)
	{
		ft_memset(s, (int)'\0', size + 1);
		return (s);
	}
	return (NULL);
}
