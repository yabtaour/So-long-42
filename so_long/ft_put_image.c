/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 07:58:18 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 18:16:00 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	ft_put_image(t_w w)
{
	int	i;
	int	j;

	i = 0;
	while (w.info.result[i])
	{
		j = 0;
		while (w.info.result[i][j])
		{
			if (w.info.result[i][j] == '1')
				mlx_put_image_to_window(w.mlx_p, w.mlx_w, w.w, j * 50, i * 50);
			if (w.info.result[i][j] == 'P')
				mlx_put_image_to_window(w.mlx_p, w.mlx_w, w.p, j * 50, i * 50);
			if (w.info.result[i][j] == 'C')
				mlx_put_image_to_window(w.mlx_p, w.mlx_w, w.c, j * 50, i * 50);
			if (w.info.result[i][j] == 'E')
				mlx_put_image_to_window(w.mlx_p, w.mlx_w, w.d, j * 50, i * 50);
			if (w.info.result[i][j] == '0')
				mlx_put_image_to_window(w.mlx_p, w.mlx_w, w.b, j * 50, i * 50);
			j++;
		}
		i++;
	}
}
