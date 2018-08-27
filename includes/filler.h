/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:00:32 by msefako           #+#    #+#             */
/*   Updated: 2018/08/26 03:44:56 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../libft/libft.h"

typedef struct	s_filler
{
	int				w;
	int				h;
	int				rating;
	struct s_filler	*next;
}				t_filler;
typedef struct	s_map
{
	int		w;
	int		h;
	char	**map;
	int		stat;
}				t_map;
typedef struct	s_token
{
	int		w;
	int		h;
	int		first_w;
	int		first_h;
	char	**token;
}				t_token;
typedef struct	s_savespace
{
	int		j;
	int		i;
}				t_distance;
typedef struct	s_savelines
{
	t_map			map;
	t_filler		moves;
	t_token			token;
	t_distance		coords;
}				t_savelines;
t_map			read_map();
t_token			read_token();
int				rd_pce();
int				compare();
int				distance_calc(int ha, int wa, int hb, int wb);
void			print_optim(t_filler *moves);

#endif
