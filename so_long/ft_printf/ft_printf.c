/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:35:44 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/26 19:18:11 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_print_hex(char c, unsigned int number)
{
	int		len;

	len = 0;
	if (c == 'X')
		len += ft_to_hex_up(number);
	else if (c == 'x')
		len += ft_to_hex_low(number);
	return (len);
}

static int	ft_print_pointer(unsigned long number)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	if (number == 0)
		len += ft_putchar('0');
	else
		len += ft_to_hex_pointer(number);
	return (len);
}

static int	ft_print_char_int(char c, int value)
{
	int				len;
	unsigned int	value2;

	value2 = (unsigned int)value;
	len = 0;
	if (c == 'd' || c == 'i')
		len += ft_putnbr(value);
	else if (c == 'c')
		len += ft_putchar(value);
	else if (c == 'u')
		len += ft_putnbr_u(value2);
	return (len);
}

static int	ft_print(char format, void *ptr)
{
	int	len;

	len = 0;
	if (format == 's')
		len += ft_putstr((char *)ptr);
	else if (format == 'd' || format == 'i' || format == 'c' || format == 'u')
		len += ft_print_char_int(format, (int)ptr);
	else if (format == 'X' || format == 'x')
		len += ft_print_hex(format, (unsigned int)ptr);
	else if (format == 'p')
		len += ft_print_pointer((unsigned long)ptr);
	return (len);
}

int	ft_printf(const char	*format, ...)
{
	va_list				list;
	int					len;
	void				*ptr;

	len = 0;
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += ft_putchar('%');
			else
			{
				ptr = va_arg(list, void *);
				len += ft_print(*format, ptr);
			}
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(list);
	return (len);
}
