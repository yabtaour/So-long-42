/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:37:11 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/17 10:22:07 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int main(int argc, char *argv[])
{
	static char	*str1;
	char		*str;
	int			i = 0;
	char		*str2;

	if (argc != 2)
		return (1);
	int	fd = open(argv[1], O_RDONLY);
	if (!check_name(argv[1]))
		return (1);
	while ((str = get_next_line(fd)))
		str1 = ft_strjoin(str1, str);
	//printf("%s", str1);
	/*while (str1[i] != '\0')
		i++;
	if (str1[i - 1] == '\n')
	{
		printf("%s", "empty file at the end");
		return(1);
	}*/
	if (!check_map(str1, fd))
		printf("%s", "invalid map");
	else
		printf("%s", "valid map");
	return (0);
}
