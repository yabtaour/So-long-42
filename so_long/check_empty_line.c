/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:20:57 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/18 09:21:14 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void    ft_check_empty_line(t_info info)
{
     int i;

     i = 0;
     if (info.map[0] == '\n')
     {
        printf("%s\n", "Map can not start with empty line");
        exit(0);     
     }
     if (info.map[ft_strlen(info.map) - 1] == '\n')
     {
          printf("%s\n", "Empty line at the end");
          exit(0);
     }
    while (i < ft_strlen(info.map))
    {
        if (info.map[i] == '\n' && info.map[i + 1] == '\n')
          {
            printf("%s", "Empty line on the middle");
            exit(0);
          }
        i++;
    }
}

void ft_empty_file()
{
    printf("%s", "Map is empty");
    exit(0);
}