/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:13:13 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 20:03:07 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	ft_window(t_w w)
{
	int	i;
	int	j;

	i = w.info.map_info.line_length;
	j = w.info.map_info.line_count;
	w.info = ft_check_map(w.info);
	w.mlx_p = mlx_init();
	w.mlx_w = mlx_new_window(w.mlx_p, 50 * i, 50 * j, "appah");
	w.w = mlx_xpm_file_to_image(w.mlx_p, "w.xpm", &w.x, &w.y);
	w.c = mlx_xpm_file_to_image(w.mlx_p, "c.xpm", &w.x, &w.y);
	w.p = mlx_xpm_file_to_image(w.mlx_p, "p.xpm", &w.x, &w.y);
	w.b = mlx_xpm_file_to_image(w.mlx_p, "b.xpm", &w.x, &w.y);
	w.d = mlx_xpm_file_to_image(w.mlx_p, "d.xpm", &w.x, &w.y);
	ft_put_image(w);
	mlx_hook(w.mlx_w, 2, 0, ft_move, &w);
	mlx_loop(w.mlx_p);
	return (0);
}
