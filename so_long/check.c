/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:25:07 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/18 00:29:00 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	check_name(char *str)
{
	int	len;
	len = ft_strlen(str);
	if (str[len - 1] == 'r' && str[len - 2] == 'e'
	&& str[len - 3] == 'b' && str[len - 4] == '.')
		return (1);
	return (0);
}

int	check_items(char *str)
{
	int	p;
	int	c;
	int	e;
	int	i = 0;

	p = 0;
	c = 0;
	e = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == 'P')
			p++;
		if (str[i] == 'C')
			c++;
		if (str[i] == 'E')
			e++;
		i++;
	}
	if (p != 1 && c < 1 && e != 1)
		return (0);
	return (1);
}

int	check_len(char	*str)
{
	int		i = 0;
	int		len;
	int		len2;
	char	**result;

	if (!str)
		return (0);
	result = ft_split(str, '\n');
	//printf("%s", str);
	while (result[i])
	{
		if (i == 0)
			len = ft_strlen(result[i]);
		len2 = ft_strlen(result[i]);
		if (len != len2)
			printf("%s", "fix your lines length");
		i++;
	}
	return (1);
}

int	check_walls(char *str)
{
	char	**result;
	int		i = 0;
	int		j = 0;
	result = ft_split(str, '\n');
	while (result[i])
		j = 0;
		if(i = )
		while (result[i][j])
		{
			if (result[i][j] != '1')
				return (0);
			j++;
		}
		i++;
	return (1);
}

int	check_map(char *str, int fd)
{
	if (!str)
		return (0);
	int	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 'P' && str[i] != 'C'
		&& str[i] != '\n' && str[i] != 'E' 
		&& str[i] != '1' && str[i] != '0')
			return (0);
	 i++;
	}
	if (!check_len(str) || !check_items(str))
		return (0);
	return (1);
}
