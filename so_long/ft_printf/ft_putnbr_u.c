/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punbre_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:39:21 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/25 14:45:06 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_u(unsigned int number)
{
	int	len;

	len = 0;
	if (number <= 9 && number >= 0)
		len += ft_putchar(number + 48);
	else if (number > 9)
	{
		len += ft_putnbr_u(number / 10);
		len += ft_putnbr_u(number % 10);
	}
	return (len);
}
