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

int ft_move(int keycode, t_window window)
{
    // int i = 0 ;
    // int j;
    //printf("%d\n", keycode);
    
    t_info info;
    if (keycode == 13)
        //printf("%d\n", keycode);
        ft_move_up(window, info);

    //ft_put_image(window, window.info);
    //printf("%d\n", keycode);
    return (0);
}