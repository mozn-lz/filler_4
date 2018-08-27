/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:55:33 by msefako           #+#    #+#             */
/*   Updated: 2018/06/04 21:23:43 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;
	char	*s;

	s = (char*)str;
	i = 0;
	if (!s || !f)
		return (NULL);
	fresh = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (fresh)
	{
		while (s[i] != '\0')
		{
			fresh[i] = (f)(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	else
		return (NULL);
	return (fresh);
}
