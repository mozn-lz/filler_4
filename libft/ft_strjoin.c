/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 03:48:27 by msefako           #+#    #+#             */
/*   Updated: 2018/06/05 21:10:07 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*fresh;
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)str1;
	s2 = (char*)str2;
	i = 0;
	if (s1 && s2)
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		fresh = ft_strnew(i);
		if (fresh)
		{
			fresh = ft_strcpy(fresh, s1);
			fresh = ft_strcat(fresh, s2);
			return (fresh);
		}
	}
	return (NULL);
}
