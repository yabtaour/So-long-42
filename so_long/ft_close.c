/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:19:58 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/26 14:10:12 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int ft_close(t_w *w)
{
	int	i;

	i = 0;
	while (w->info.result[i])
	{
		free(w->info.result[i]);
		i++;
	}
	free(w->info.result);
	ft_printf("game closed !!");
	exit(0);
	return (0);
}
