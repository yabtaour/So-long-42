/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:54:59 by yabtaour          #+#    #+#             */
/*   Updated: 2021/11/25 14:45:44 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_strrev(char	*s)
{
	int		len;
	int		i;
	char	tmp;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len - 1];
		s[len -1] = tmp;
		i++;
		len--;
	}
	return (s);
}
