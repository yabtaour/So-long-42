/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:35:27 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/24 18:19:56 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	ft_empty_file(void)
{
	printf("%s", "You entered an empty map");
	exit(0);
}

void	ft_no_map(void)
{
	printf("No map found");
	exit(0);
}
