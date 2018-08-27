/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:53:12 by msefako           #+#    #+#             */
/*   Updated: 2018/08/26 05:35:43 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		rd_pce(char *str)
{
	int		i;

	i = 0;
	get_next_line(0, &str);
	while (str[i])
	{
		if (str[i] == '1')
			return (0);
		else if (str[i] == '2')
			return (1);
		i++;
	}
	free(str);
	return (0);
}
