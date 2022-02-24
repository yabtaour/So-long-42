/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:46:52 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/24 16:47:03 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	main(int argc, char *argv[])
{
	char		*str;
	t_window	window;

	window.info.map = NULL;
	if (argc != 2 || !check_name(argv[1]))
		ft_no_map();
	window.info.fd = open(argv[1], O_RDONLY);
	str = get_next_line(window.info.fd);
	if (!str)
	{
		ft_empty_file();
		free(str);
	}
	window.info.map = ft_strjoin(window.info.map, str);
	while (str)
	{
		window.info.map = ft_strjoin(window.info.map, str);
		free(str);
		str = get_next_line(window.info.fd);
	}
	window.info = ft_check_map(window.info);
	ft_window(window);
	return (0);
}
