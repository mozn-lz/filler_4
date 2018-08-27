/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:54:15 by msefako           #+#    #+#             */
/*   Updated: 2018/08/26 03:46:00 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		distance_calc(int ha, int wa, int hb, int wb)
{
	return ((((ha - wb) * (ha - wb)) + ((wa - hb) * (wa - hb))));
}

void	print_optim(t_filler *moves)
{
	int rating;
	int x;
	int y;

	rating = 10000000;
	y = moves->h;
	x = moves->w;
	while (moves)
	{
		if (rating > moves->rating)
		{
			rating = moves->rating;
			x = moves->w;
			y = moves->h;
		}
		moves = moves->next;
	}
	ft_putnbr(x);
	ft_putchar(' ');
	ft_putnbr(y);
	ft_putchar('\n');
}
