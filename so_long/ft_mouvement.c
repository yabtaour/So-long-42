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

t_window *ft_find_player(t_window *window)
{
    int i = 0;
    int j;
    //printf ("%s\n", window->info.result[0]);
    while (window->info.result[i])
    {
        //printf("%s\n", info.result[i]);
        j = 0;    
        while (window->info.result[i][j])
        {
            //printf("%d\n", j);
            if (window->info.result[i][j] == 'P')
            {        
                window->i = i;
                window->j = j;
                return (window);
            }
            j++;
        }
        i++;
    }
    return (window);
}

void ft_move_up(t_window *window)
{
    window = ft_find_player(window);
    if (window->info.result[window->i - 1][window->j] != '1' || (window->info.result[window->i - 1][window->j] == 'E' && window->info.map_info.c_num <= 0))
    {
        if (window->info.result[window->i - 1][window->j] == 'E' && window->info.map_info.c_num == 0)
            exit(0);
        //if (window->info.result[window->i - 1][window->j] == 'E' && window->info.map_info.c_num != 0)
        
        if ((window->info.result[window->i - 1][window->j]) == 'C' || (window->info.result[window->i - 1][window->j]) == '0')
        {
            if((window->info.result[window->i - 1][window->j]) == 'C')
                window->info.map_info.c_num--;
            window->info.result[window->i][window->j] = '0';
            window->info.result[window->i - 1][window->j] = 'P';
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->back,  window->j*50, window->i*50);
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->player,  window->j*50, ((window->i)-1)*50);
        }
    }
}

void ft_move_down(t_window *window)
{
    window = ft_find_player(window);
    if (window->info.result[window->i + 1][window->j] != '1' || (window->info.result[window->i + 1][window->j] == 'E' && window->info.map_info.c_num <= 0))
    {
        if (window->info.result[window->i + 1][window->j] == 'E' && window->info.map_info.c_num == 0)
            exit(0);
        //if (window->info.result[window->i + 1][window->j] == 'E' && window->info.map_info.c_num != 0)
        
        if ((window->info.result[window->i + 1][window->j]) == 'C' || (window->info.result[window->i + 1][window->j]) == '0')
        {
            //if (window->info.result[window->i + 1][window->j] == 'C')
            if ((window->info.result[window->i + 1][window->j]) == 'C')
                window->info.map_info.c_num--;
            window->info.result[window->i][window->j] = '0';
            window->info.result[window->i + 1][window->j] = 'P';
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->back,  window->j*50, window->i*50);
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->player,  window->j*50, ((window->i)+1)*50);
        }
    }
}

void ft_move_right(t_window *window)
{
    window = ft_find_player(window);
    if (window->info.result[window->i][window->j + 1] != '1' || (window->info.result[window->i][window->j + 1] == 'E' && window->info.map_info.c_num <= 0))
    {
        if (window->info.result[window->i][window->j + 1] == 'E' && window->info.map_info.c_num == 0)
            exit(0);
        //if (window->info.result[window->i][window->j + 1] == 'E' && window->info.map_info.c_num != 0)
        
        if ((window->info.result[window->i][window->j + 1]) == 'C' || (window->info.result[window->i][window->j + 1]) == '0')
        {
            if ((window->info.result[window->i][window->j + 1]) == 'C')
                window->info.map_info.c_num--;
            window->info.result[window->i][window->j] = '0';
            window->info.result[window->i][window->j + 1] = 'P';
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->back,  window->j*50, window->i*50);
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->player,  (window->j + 1)*50, (window->i)*50);
        }
    }
}

void ft_move_left(t_window *window)
{
    window = ft_find_player(window);
    if (window->info.result[window->i][window->j - 1] != '1' || (window->info.result[window->i][window->j - 1] == 'E' && window->info.map_info.c_num <= 0))
    {
        if (window->info.result[window->i][window->j - 1] == 'E' && window->info.map_info.c_num == 0)
            exit(0);
        //if (window->info.result[window->i][window->j - 1] == 'E' && window->info.map_info.c_num != 0)
            
        if ((window->info.result[window->i][window->j - 1]) == 'C' || window->info.result[window->i][window->j - 1] == '0')
        {
            
            if (window->info.result[window->i][window->j - 1] == 'C')
                window->info.map_info.c_num--;
            printf("%d\n", window->info.map_info.c_num);
            window->info.result[window->i][window->j] = '0';
            window->info.result[window->i][window->j - 1] = 'P';
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->back,  window->j*50, window->i*50);
            mlx_put_image_to_window (window->mlx_pointer, window->window_pointer, window->player,  (window->j - 1)*50, (window->i)*50);
        }
    }
}