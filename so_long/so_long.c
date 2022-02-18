/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:13:13 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/18 02:13:24 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int main(int argc, char *argv[])
{
    char    *str;
    t_info  info;

    info.map = NULL;
    if (argc != 2 || !check_name(argv[1]))
    {
        printf("%s", "No map found");
        return (0);
    }
    info.fd = open(argv[1], O_RDONLY);
    if (info.fd < 0)
        return (0);
    while ((str = get_next_line(info.fd)))
    {
        info.map = ft_strjoin(info.map, str);
        free(str);
    }
    if (info.map[0] == '\n')
        printf("%s\n", "appah1");
    printf("%d\n", ft_strlen(info.map));
    int i = 0;
    if (info.map[ft_strlen(info.map) - 1] == '\n')
        printf("%s\n", "appah2");
    while (i < ft_strlen(info.map))
    {
        if (info.map[i] == '\n' && info.map[i + 1] == '\n')
            printf("%s", "appaaaaaaah3");
        i++;
    }
    //printf("%s", info.map);
    ft_check_empty_line(info); 
    info.map_info = ft_check_map(info);./

}