/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:21:56 by msefako           #+#    #+#             */
/*   Updated: 2018/06/06 00:45:41 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*fresh;
	char	*s;
	int		i;

	s = (char*)str;
	i = 0;
	if (!f || !str)
		return (NULL);
	fresh = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (fresh)
	{
		while (s[i] != '\0')
		{
			fresh[i] = (*f)((char)s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	else
		return (NULL);
	return (fresh);
}
