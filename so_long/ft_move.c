/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:59:11 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/22 01:59:13 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int ft_move(int keycode, t_window *window)
{
    // int i = 0 ;
    // int j;
    //printf("%d\n", keycode);
    
    //printf("%d\n", keycode);
    if (keycode == 13)
        ft_move_up(window);
    if (keycode == 2)
        ft_move_right(window);
    if (keycode == 1)
        ft_move_down(window);
    if (keycode == 0)
        ft_move_left(window);
    return (0);
}