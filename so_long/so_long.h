/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:38:54 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 20:08:29 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include "mlx.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>

# define BUFFER_SIZE 1

typedef struct s_map{
	int	p_num;
	int	e_num;
	int	c_num;
	int	line_length;
	int	line_count;
}	t_map;

typedef struct s_info{
	int		fd;
	char	*map;
	t_map	map_info;
	char	**result;
}	t_info;

typedef struct s_w{
	void	*mlx_p;
	void	*mlx_w;
	void	*w;
	void	*p;
	void	*d;
	void	*b;
	void	*c;
	t_info	info;
	int		x;
	int		y;
	int		i;
	int		j;
	int		m;
}	t_w;

int		check_name(char *str);
t_info	ft_check_map(t_info info);
void	ft_fix_your_map(char *map);
void	ft_imposter(char *map);
t_info	ft_check_len(t_info info);
void	ft_wrong_len(t_info info);
void	ft_wall_error(t_info info);
void	ft_check_empty_line(t_info info);
void	ft_empty_file(void);
void	ft_no_map(void);
void	ft_put_image(t_w w);
int		ft_move(int keycode, t_w *w);
void	ft_move_up(t_w *w);
void	ft_move_down(t_w *w);
void	ft_move_right(t_w *w);
void	ft_move_left(t_w *w);
int		ft_window(t_w w);
void	ft_change_position_r_l(int i, int j, t_w *w);
void	ft_change_position_u_d(int i, int j, t_w *w);
int		ft_close(t_w *w);
void	*ft_calloc(int count, int size);
char	**ft_split(char *s, char c);
int		ft_strlen(char *str);
char	*ft_substr(char *s, int start, size_t len);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
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
