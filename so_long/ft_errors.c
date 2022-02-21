/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 06:07:56 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/18 06:08:00 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void    ft_imposter()
{
    printf("%s", "There's an emposter among ur map");
    exit(0);
}

void    ft_fix_your_map()
{
    printf("%s\n", "Map is wrong");
    exit(0);
}

void    ft_wrong_len()
{
    printf("%s", "Lines have different lengths");
    exit(0);
}

void    ft_wall_error()
{
    printf("%s", "Fix your walls");
    exit(0);
}