/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:17:19 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/26 17:51:24 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../so_long.h"

int		ft_strlen(char	*str);
char	*ft_strrev(char	*s);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int number);
int		ft_putnbr_u(unsigned int number);
int		ft_to_hex_up(unsigned int number);
int		ft_to_hex_low(unsigned int number);
int		ft_printf(const char *format, ...);
int		ft_to_hex_pointer(unsigned long number);

#endif
