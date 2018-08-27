/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:51:51 by msefako           #+#    #+#             */
/*   Updated: 2018/08/27 22:51:16 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int			star_check(t_token *token, char **map, int x, int y)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (i < token->h)
	{
		j = 0;
		while (j < token->w)
		{
			if (token->token[i][j] == '*' && map[i + x][j + y] == 'Y')
				k++;
			if (token->token[i][j] == '*' && map[i + x][j + y] != 'Y'
					&& map[i + x][j + y] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (k);
}

void		ft_lstaddto(t_filler **head, int i, int j)
{
	t_filler *node;

	node = malloc(sizeof(t_filler));
	node->w = i;
	node->h = j;
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;
	return ;
}

void		find_place(t_filler *mv, t_map map, int x, t_token t)
{
	t_distance d;

	while (mv)
	{
		d.i = t.first_w;
		d.j = t.first_h;
		mv->rating = 1000000;
		while (map.map[d.i][d.j])
		{
			if (map.map[d.i][d.j] != 'Y' && map.map[d.i][d.j] != '.'
					&& map.map[d.i][d.j])
				if (mv->rating > distance_calc(d.i, d.j, mv->h, mv->w))
					mv->rating = distance_calc(d.i, d.j, mv->h, mv->w);
			d.j++;
			if (!map.map[d.i][d.j + 1])
			{
				d.j = 0;
				d.i++;
			}
			if (d.i == x)
				break ;
		}
		mv = mv->next;
	}
}

int			compare(int player)
{
	t_filler		*moves;
	t_savelines		rt;

	moves = NULL;
	rt.map = read_map(player);
	if (rt.map.stat == 1)
		return (1);
	rt.token = read_token();
	rt.coords.i = -1;
	while (++rt.coords.i <= (rt.map.h - rt.token.h))
	{
		rt.coords.j = 0;
		while (rt.coords.j <= (rt.map.w - rt.token.w))
		{
			if (star_check(&rt.token, rt.map.map, rt.coords.i,
						rt.coords.j) == 1)
				ft_lstaddto(&moves, rt.coords.i, rt.coords.j);
			rt.coords.j++;
		}
	}
	if (moves == NULL)
		return (1);
	find_place(moves, rt.map, rt.map.h, rt.token);
	print_optim(moves);
	return (0);
}
