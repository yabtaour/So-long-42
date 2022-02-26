/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouvement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:41:06 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 20:02:09 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

t_w	*ft_find_player(t_w *w)
{
	int	i;
	int	j;

	i = 0;
	while (w->info.result[i])
	{
		j = 0;
		while (w->info.result[i][j])
		{
			if (w->info.result[i][j] == 'P')
			{
				w->i = i;
				w->j = j;
				return (w);
			}
			j++;
		}
		i++;
	}
	return (w);
}

void	ft_move_up(t_w *w)
{
	w = ft_find_player(w);
	if (w->info.result[w->i - 1][w->j] != '1'
		|| (w->info.result[w->i - 1][w->j] == 'E'
		&& w->info.map_info.c_num <= 0))
	{
		if (w->info.result[w->i - 1][w->j] == 'E'
			&& w->info.map_info.c_num == 0)
			exit(0);
		if ((w->info.result[w->i - 1][w->j]) == 'C'
			|| (w->info.result[w->i - 1][w->j]) == '0')
		{
			if ((w->info.result[w->i - 1][w->j]) == 'C')
				w->info.map_info.c_num--;
			w->info.result[w->i][w->j] = '0';
			w->info.result[w->i - 1][w->j] = 'P';
			w->m++;
			ft_printf ("Number of moves is : %d \n", w->m);
			ft_change_position_u_d(((w->i) - 1) * 50, w->j * 50, w);
		}
	}
}

void	ft_move_down(t_w *w)
{
	w = ft_find_player(w);
	if (w->info.result[w->i + 1][w->j] != '1'
		|| (w->info.result[w->i + 1][w->j] == 'E'
		&& w->info.map_info.c_num <= 0))
	{
		if (w->info.result[w->i + 1][w->j] == 'E'
			&& w->info.map_info.c_num == 0)
			exit(0);
		if ((w->info.result[w->i + 1][w->j]) == 'C'
			|| (w->info.result[w->i + 1][w->j]) == '0')
		{
			if ((w->info.result[w->i + 1][w->j]) == 'C')
				w->info.map_info.c_num--;
			w->info.result[w->i][w->j] = '0';
			w->info.result[w->i + 1][w->j] = 'P';
			w->m++;
			ft_printf ("Number of moves is : %d \n", w->m);
			ft_change_position_u_d(((w->i) + 1) * 50, w->j * 50, w);
		}
	}
}

void	ft_move_right(t_w *w)
{
	w = ft_find_player(w);
	if (w->info.result[w->i][w->j + 1] != '1'
		|| (w->info.result[w->i][w->j + 1] == 'E'
		&& w->info.map_info.c_num <= 0))
	{
		if (w->info.result[w->i][w->j + 1] == 'E'
			&& w->info.map_info.c_num == 0)
			exit(0);
		if ((w->info.result[w->i][w->j + 1]) == 'C'
			|| (w->info.result[w->i][w->j + 1]) == '0')
		{
			if ((w->info.result[w->i][w->j + 1]) == 'C')
				w->info.map_info.c_num--;
			w->info.result[w->i][w->j] = '0';
			w->info.result[w->i][w->j + 1] = 'P';
			w->m++;
			ft_printf ("Number of moves is : %d \n", w->m);
			ft_change_position_r_l(w->i * 50, (w->j + 1) * 50, w);
		}
	}
}

void	ft_move_left(t_w *w)
{
	w = ft_find_player(w);
	if (w->info.result[w->i][w->j - 1] != '1'
		|| (w->info.result[w->i][w->j - 1] == 'E'
		&& w->info.map_info.c_num <= 0))
	{
		if (w->info.result[w->i][w->j - 1] == 'E'
			&& w->info.map_info.c_num == 0)
			exit(0);
		if ((w->info.result[w->i][w->j - 1]) == 'C'
			|| w->info.result[w->i][w->j - 1] == '0')
		{
			if (w->info.result[w->i][w->j - 1] == 'C')
				w->info.map_info.c_num--;
			w->info.result[w->i][w->j] = '0';
			w->info.result[w->i][w->j - 1] = 'P';
			w->m++;
			ft_printf ("Number of moves is : %d \n", w->m);
			ft_change_position_r_l(w->i * 50, (w->j - 1) * 50, w);
		}
	}
}
