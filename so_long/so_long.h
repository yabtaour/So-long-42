/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:38:54 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/20 09:17:34 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SO_LONG_H
#define SO_LONG_H

#include "./get_next_line/get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include "mlx.h"
#include <stdlib.h>
#include <fcntl.h>
#include "./libft/libft.h"

typedef struct s_map{
    int p_num;
    int e_num;
    int c_num;
    int line_length;
    int line_count;
}   t_map;

typedef struct s_info{
    int     fd;
    char    *map;
    t_map   map_info;
    char    **result;
} t_info;

typedef struct s_window{
    void *mlx_pointer;
    void *window_pointer;
    void *wall;
    void *player;
    void *door;
    void *back;
    void *collectible;
    t_info info;
    int x;
    int y;
    int i;
    int j;
} t_window;

int     check_name(char *str);
t_info  ft_check_map(t_info info);
void    ft_fix_your_map();
void    ft_imposter();
t_info  ft_check_len(t_info info);
void    ft_wrong_len();
void    ft_wall_error();
void    ft_empty_line();
void    ft_check_empty_line(t_info info);
void    ft_empty_file();
void    ft_no_map();
void    ft_put_image(t_window window, t_info info);
int     ft_move(int keycode, t_window *window);
void    ft_move_up(t_window *window);
void    ft_move_down(t_window *window);
void    ft_move_right(t_window *window);
void    ft_move_left(t_window *window);
int     ft_window(t_window window);

#endif
