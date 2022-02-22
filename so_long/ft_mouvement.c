/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouvement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:41:06 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/22 09:41:15 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void ft_find_player(t_info info)
{
    int i = 0;
    int j;
    //printf("oui\n");
    if (info.result[i])
        printf("%s\n", info.result[i]);
    else
        printf("nn");
    // while (info.result[i])
    // {
    //     printf("%s\n", info.result[i]);
    //     j = 0;    
    //     while (info.result[i][j])
    //     {
    //         //printf("%d\n", j);
    //         if (info.result[i][j] == 'P')
    //         {
    //             info.i = i;
    //             info.j = j;
    //             return;
    //         }
    //         j++;
    //     }
    //     i++;
    // }
}

void ft_move_up(t_window window, t_info info)
{
    //t_window window;
    ft_find_player(window.info);
    //  window.info.result[0][0] = '0';
    //  window.info.result[2 - 1][0] = 'P';
    //printf("oui\n");
    // mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.back,  0*50, 0*50);
    // mlx_put_image_to_window (window.mlx_pointer, window.window_pointer, window.player,  0*50, 1*50);
}