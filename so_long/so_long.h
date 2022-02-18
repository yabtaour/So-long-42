/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:38:54 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/18 02:07:21 by yabtaour         ###   ########.fr       */
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
} t_info;

int     check_name(char *str);
char    **ft_split(char *s, char c);  
void    *ft_calloc(size_t count, size_t size);
char    *ft_substr(char *s, int start, size_t len);
t_map    ft_check_map(t_info info);
void    ft_fix_your_map();
void    ft_imposter();
t_map   ft_check_len(t_info info);
void    ft_wrong_len();
void    ft_wall_error();
void    ft_empty_line();
void    ft_check_empty_line(t_info info);

#endif
