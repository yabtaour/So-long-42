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
	char	*str;
	t_w		w;

	w.info.map = NULL;
	if (argc != 2 || !check_name(argv[1]))
		ft_no_map();
	w.info.fd = open(argv[1], O_RDONLY);
	str = get_next_line(w.info.fd);
	if (!str)
		ft_empty_file();
	while (str)
	{
		w.info.map = ft_strjoin(w.info.map, str);
		free(str);
		str = get_next_line(w.info.fd);
	}
	w.info = ft_check_map(w.info);
	ft_window(w);
	return (0);
}
