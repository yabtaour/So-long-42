/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:59:35 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/26 18:00:59 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_end_low(char	*str)
{
	int	len;

	len = 0;
	ft_strrev(str);
	len += ft_putstr(str);
	free(str);
	return (len);
}

int	ft_to_hex_low(unsigned int number)
{
	int			remainder;
	int			i;
	char		*str;

	i = 0;
	str = (char *)ft_calloc(500, sizeof(char));
	if (!str)
		return (0);
	if (number == 0)
	{
		str[i] = '0';
		i++;
	}
	while (number != 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			str[i] = remainder + 48;
		else
			str[i] = remainder + 87;
		i++;
		number /= 16;
	}
	return (ft_end_low(str));
}
