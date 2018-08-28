/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:52:18 by msefako           #+#    #+#             */
/*   Updated: 2018/08/26 05:37:01 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		main(void)
{
	int player;
	int stat;

	stat = 0;
	player = rd_pce();
	while (!stat)
		stat = (compare(player));
}
