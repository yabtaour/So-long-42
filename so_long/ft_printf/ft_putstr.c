/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:07:00 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/25 14:45:28 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str == NULL)
		len += ft_putstr("(null)");
	if (str)
	{
		while (str[i] != '\0')
		{	
			len += ft_putchar(str[i]);
			i++;
		}
	}
	return (len);
}
