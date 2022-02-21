/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:13:36 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/20 09:26:34 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void    *ft_calloc(int  count, int   size);
char    **ft_split(char *s, char c);
int     ft_strlen(char *str);
char	*ft_substr(char *s, int start, size_t len);

#endif
