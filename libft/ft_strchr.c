/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:33:31 by msefako           #+#    #+#             */
/*   Updated: 2018/05/28 12:48:42 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	itc;
	char			*s2;
	int				i;

	s2 = (char*)s;
	itc = c;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == itc)
			return (s2 + i);
		i++;
	}
	if (s2[i] == itc)
		return (s2 + i);
	else
		return (NULL);
}
