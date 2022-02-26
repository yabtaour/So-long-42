/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:18:18 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/25 14:43:20 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int number)
{
	int			len;

	len = 0;
	if (number == -2147483648)
		len += ft_putstr("-2147483648");
	else if (number >= 0 && number <= 9)
		len += ft_putchar(number + 48);
	else if (number > 9)
	{
		len += ft_putnbr(number / 10);
		len += ft_putnbr(number % 10);
	}
	else if (number < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(-number);
	}
	return (len);
}
