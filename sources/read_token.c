/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:53:49 by msefako           #+#    #+#             */
/*   Updated: 2018/08/26 03:46:51 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

t_token		token_size(void)
{
	char	*line;
	t_token	token;

	get_next_line(0, &line);
	token.h = ft_atoi(line + 6);
	if (token.h > 9)
		token.w = ft_atoi(line + 9);
	else
		token.w = ft_atoi(line + 8);
	return (token);
}

t_token		get_firsts(t_token token)
{
	int			y;
	int			x;
	t_token		fs_tkn;

	y = 0;
	fs_tkn.w = token.w;
	fs_tkn.h = token.h;
	fs_tkn.token = token.token;
	while (y < fs_tkn.h)
	{
		x = 0;
		while (x < fs_tkn.w)
		{
			if (fs_tkn.token[y][x] == '*')
			{
				fs_tkn.first_w = y;
				fs_tkn.first_h = x;
			}
			x++;
		}
		y++;
	}
	return (fs_tkn);
}

t_token		read_token(void)
{
	char		**ret;
	int			i;
	t_token		token;

	i = 0;
	token = token_size();
	ret = (char **)malloc(sizeof(char**) * token.h + 1);
	while (i < token.h)
	{
		get_next_line(0, &ret[i]);
		ret[i][ft_strlen(ret[i])] = 0;
		i++;
	}
	ret[i] = NULL;
	i = 0;
	token.token = ret;
	token = get_firsts(token);
	return (token);
}
