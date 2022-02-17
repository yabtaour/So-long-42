/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 07:39:24 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/14 04:24:37 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SO_LONG_H
#define SO_LONG_H

#include "mlx.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 10

typedef struct {
	char	*name;
	int		line_len;
}	mapp;

char	**ft_split(char *s, char c);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
void	ft_bzero(void	*s, size_t	n);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t	count, size_t	size);
void	*ft_memset(void *b, int c, size_t len);
int		check_name(char *str);
int		check_map(char *str, int fd);

#endif
