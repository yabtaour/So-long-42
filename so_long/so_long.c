/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:13:13 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/19 10:25:00 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int ft_window(t_window window)
{
	window.info = ft_check_map(window.info);
	window.mlx_pointer = mlx_init();
	window.window_pointer = mlx_new_window(window.mlx_pointer, 50 * window.info.map_info.line_length, 50 * window.info.map_info.line_count, "appah");
	window.wall = mlx_xpm_file_to_image(window.mlx_pointer, "wall.xpm", &window.x, &window.y);
	window.collectible = mlx_xpm_file_to_image(window.mlx_pointer, "collectible.xpm", &window.x, &window.y);
	window.player = mlx_xpm_file_to_image(window.mlx_pointer, "player.xpm", &window.x, &window.y);
	window.back = mlx_xpm_file_to_image(window.mlx_pointer, "back.xpm", &window.x, &window.y);
	window.door = mlx_xpm_file_to_image(window.mlx_pointer, "door.xpm", &window.x, &window.y);
	ft_put_image(window, window.info);
	mlx_hook(window.window_pointer, 2, 0, ft_move, &window);
	mlx_loop(window.mlx_pointer);
	return (0);
}