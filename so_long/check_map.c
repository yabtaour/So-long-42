/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:13:46 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/18 04:13:48 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

t_map   ft_check_content(char *map)
{
    int i;
    t_map map_info;

    i = 0;
    map_info.p_num = 0;
    map_info.c_num = 0;
    map_info.e_num = 0; 
    while(map[i])
    {
        if (map[i] != '1' && map[i] != '0'
        && map[i] != '\n' && map[i] != 'P'
        && map[i] != 'C' && map[i] != 'E')
            ft_imposter();
        if (map[i] == 'P')
            map_info.p_num++;
        if (map[i] == 'C')
            map_info.c_num++;
        if (map[i] == 'E')
            map_info.e_num++;       
        i++;
    }
    if (map_info.p_num != 1 || map_info.e_num < 1 || map_info.c_num < 1)
        ft_fix_your_map();
    return (map_info);
}

t_info   ft_check_len(t_info info)
{
    int len2;
    int i = 0;
    info.map_info.line_count = 0;

    info.result = ft_split(info.map, '\n');
    i = 0;
    while(info.result[info.map_info.line_count])
    {
        if (info.map_info.line_count  == 0)
             info.map_info.line_length = ft_strlen(info.result[info.map_info.line_count]);
        len2 = ft_strlen(info.result[info.map_info.line_count]);
        if (info.map_info.line_length != len2)
            ft_wrong_len();
        info.map_info.line_count ++;        
    }
    return (info);
}

void    ft_check_walls(t_info info)
{
    int i;
    int j;
 
    i = 0;
    //info.result = ft_split(info.map, '\n');
    while (info.result[i])
    {
        j = 0;
        if (i == 0)
        {
            while(j < info.map_info.line_length)
            {
                if (info.result[i][j] != '1')
                    ft_wall_error();
                j++;
            }
        }
        if (i > 0 && i < info.map_info.line_count)
            if (info.result[i][j] != '1' || info.result[i][info.map_info.line_length - 1] != '1')
                ft_wall_error();
        if (i == info.map_info.line_count - 1)
        {
            while(j < info.map_info.line_length)
            {
                if (info.result[i][j] != '1')
                    ft_wall_error();
                j++;
            }
        }
        i++;
    }
 
}

t_info   ft_check_map(t_info info)
{
    ft_check_empty_line(info);
    info.map_info = ft_check_content(info.map);
    //ft_check_items(info.map);
    info = ft_check_len(info);
    ft_check_walls(info);
    return (info);
}