/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:59:11 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 19:38:56 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	ft_move(int keycode, t_w *w)
{
	if (keycode == 13)
		ft_move_up(w);
	if (keycode == 2)
		ft_move_right(w);
	if (keycode == 1)
		ft_move_down(w);
	if (keycode == 0)
		ft_move_left(w);
	return (0);
}
