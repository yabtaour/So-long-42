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

int	main(int argc, char *argv[])
{
	char	*str;
	t_info	info;
	t_window window;

	info.map = NULL;
	if (argc != 2 || !check_name(argv[1]))
		ft_no_map();
	info.fd = open(argv[1], O_RDONLY);
	str = get_next_line(info.fd);
	if (!str)
	{	
		ft_empty_file();
		free(str);
	}
	info.map = ft_strjoin(info.map, str);
	free(str);
	//printf("%s", info.map);
	while ((str = get_next_line(info.fd)))
	{	
		free(str);
		info.map = ft_strjoin(info.map, str);	
		
		
	}
	//printf("%s", info.map);
	ft_check_empty_line(info);
	info = ft_check_map(info);
	window.mlx_pointer = mlx_init();
	//printf("%d\n%d\n", info.map_info.line_length, info.map_info.line_count);
	window.window_pointer = mlx_new_window(window.mlx_pointer, 50*info.map_info.line_length, 50*info.map_info.line_count, "appah");
	window.wall = mlx_xpm_file_to_image (window.mlx_pointer, "wall.xpm", &window.x, &window.y);
	window.collectible = mlx_xpm_file_to_image (window.mlx_pointer, "collectible.xpm", &window.x, &window.y );
	window.player = mlx_xpm_file_to_image (window.mlx_pointer, "player.xpm", &window.x, &window.y );
	window.back = mlx_xpm_file_to_image (window.mlx_pointer, "back.xpm", &window.x, &window.y );
	window.door = mlx_xpm_file_to_image (window.mlx_pointer, "door.xpm", &window.x, &window.y );
	ft_put_image(window, info);
	mlx_key_hook(window.window_pointer, ft_move, &window);
	mlx_loop(window.mlx_pointer);
	return (0);
}
