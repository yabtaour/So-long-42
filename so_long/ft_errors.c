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
    printf("%s", "There's an imposter among us");
    exit(0);
}

void    ft_fix_your_map()
{
    printf("%s\n", "Fix your map kid");
    exit(0);
}

void    ft_wrong_len()
{
    printf("%s", "Fix your lines length kid");
    exit(0);
}

void    ft_wall_error()
{
    printf("%s", "Fix your walls kid");
    exit(0);
}

void    ft_empty_line()
{
    printf("%s", "You have an empty line there kid");
    exit(0);
}