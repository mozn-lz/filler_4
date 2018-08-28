/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:52:49 by msefako           #+#    #+#             */
/*   Updated: 2018/08/26 05:36:15 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

t_map		map_size(void)
{
	char	*line;
	t_map	map;

	map.stat = 0;
	if (!(get_next_line(0, &line)))
	{
		map.stat = 1;
		return (map);
	}
	map.h = ft_atoi(line + 8);
	if (map.h > 99)
		map.w = ft_atoi(line + 12);
	else if (map.h > 9)
		map.w = ft_atoi(line + 11);
	else
		map.w = ft_atoi(line + 10);
	free(line);
	return (map);
}

void		converter(char **map, int piece, int h)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i][j])
	{
		if ((piece == 0 && (map[i][j] == 'O' || map[i][j] == 'o'))
			|| (piece == 1 && (map[i][j] == 'X' || map[i][j] == 'x')))
			map[i][j] = 'Y';
		if (!map[i][j + 1])
		{
			j = -1;
			i++;
		}
		if (i >= h)
			break ;
		j++;
	}
}

t_map		read_map(int piece)
{
	char		**ret;
	int			i;
	t_map		coords;

	i = 0;
	coords = map_size();
	if (coords.stat == 1)
		return (coords);
	ret = (char **)malloc(sizeof(char*) * coords.h + 1);
	get_next_line(0, &ret[i]);
	free(ret[i]);
	while (i < coords.h)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		ret[i] = ft_strsub(ret[i], 4, coords.w);
		i++;
	}
	ret[i] = NULL;
	converter(ret, piece, coords.h);
	coords.map = ret;
	return (coords);
}
