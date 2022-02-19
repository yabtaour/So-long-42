/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:13:13 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/19 10:25:00 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	main(int argc, char *argv[])
{
	char	*str;
	t_info	info;

	info.map = NULL;
	if (argc != 2 || !check_name(argv[1]))
	{
		printf("%s", "No map found");
		return (0);
	}
	info.fd = open(argv[1], O_RDONLY);
	str = get_next_line(info.fd);
	if (!str)
		ft_empty_file();
	info.map = ft_strjoin(info.map, str);
	while (str)
	{
		str = get_next_line(info.fd);
		info.map = ft_strjoin(info.map, str);
		free(str);
	}
	printf("\n%s", info.map);
	ft_check_empty_line(info);
	info.map_info = ft_check_map(info);
	return (0);
}
