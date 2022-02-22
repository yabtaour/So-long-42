/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 07:58:18 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/21 07:58:20 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void    ft_put_image(t_window window, t_info info)
{
    int i = 0;
    int j;
   
    while (info.result[i])
    {
        j = 0;
        while (info.result[i][j])
        {
            if (info.result[i][j] == '1')
                mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.wall, j*50, i*50);
            if (info.result[i][j] == 'P')
                mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.player, j*50, i*50);
            if (info.result[i][j] == 'C')
                mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.collectible, j*50, i*50);
            if (info.result[i][j] == 'E')
                mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.door, j*50, i*50);
            if (info.result[i][j] == '0')
                mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.back, j*50, i*50);
            j++;
        }
        i++;
    }
}