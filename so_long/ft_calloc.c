/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:11:41 by yabtaour          #+#    #+#             */
/*   Updated: 2022/02/25 20:13:01 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (len > 0)
	{
		ptr[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

void	ft_bzero(void	*s, size_t	n)
{
	s = ft_memset(s, '\0', n);
}

char	*ft_substr(char *s, int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	int				end;

	i = 0;
	end = len + start;
	if (!s)
		return (NULL);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		exit (1);
	if (start <= ft_strlen(s))
	{
		while (start < end && s[start] != '\0')
		{
			ptr[i] = s[start];
			i++;
			start++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

void	*ft_calloc(int count, int size)
{
	void	*ptr;
	int		sizee;

	sizee = count * size;
	ptr = (void *)malloc(sizee);
	if (ptr != NULL)
		ft_bzero(ptr, sizee);
	else
		exit(1);
	return (ptr);
}
