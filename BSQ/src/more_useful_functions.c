/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_useful_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:06:11 by aafuni            #+#    #+#             */
/*   Updated: 2023/10/18 23:09:06 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* In this file: */
char	*ft_strcat(char *dest, char *src);
void	print_map(int **map, int nr_lines, char *legend);
int		maximmum(int r, int c, int s, int n);

/* In useful_functions.c file: */
int		char_in_string(char c, char *string);
int		ft_atoi(char *string);
int		ft_strlen(char *string);
void	ft_strcpy(char *dest, char *source);

/****************************************************/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	size_dest = ft_strlen(dest);
	i = 0;
	while (*(src + i))
	{
		*(dest + size_dest + i) = *(src + i);
		i++;
	}
	*(dest + size_dest + i) = '\0';
	return (dest);
}

/**********************************/
void	print_map(int **map, int nr_lines, char *legend)
{
	int	i;
	int	j;

	i = 0;
	while (i < nr_lines)
	{
		j = 0;
		while (j < nr_lines)
		{
			write(1, &legend[map[i][j]], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

/*************************************/
int	rc_in_limit(int r, int c, int s, int n)
{
	if (r + s + 1 > n)
		return (0);
	if (c + s + 1 > n)
		return (0);
	return (1);
}
