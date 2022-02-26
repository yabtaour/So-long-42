/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 06:07:56 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 17:52:16 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	ft_imposter(char *map)
{
	free(map);
	ft_printf("%s", "There's an emposter among ur map");
	exit(0);
}

void	ft_fix_your_map(char *map)
{
	free(map);
	ft_printf("%s\n", "Map is wrong");
	exit(0);
}

void	ft_wrong_len(t_info info)
{
	int	i;

	i = 0;
	while (info.result[i])
	{
		free(info.result[i]);
		i++;
	}
	free(info.result);
	free(info.map);
	ft_printf("%s", "Lines have different lengths");
	exit(0);
}

void	ft_wall_error(t_info info)
{
	int	i;

	i = 0;
	while (info.result[i])
	{
		free(info.result[i]);
		i++;
	}
	ft_printf("%s", "Fix your walls");
	exit(0);
}
