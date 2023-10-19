/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:48:34 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/18 23:08:21 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

int	**making_the_map(int nr_lines)
{
	int	i;
	int	**map;

	i = 0;
	map = (int **)malloc(sizeof(int *) * (nr_lines + 2));
	while (i < nr_lines)
	{
		map[i] = (int *)malloc(sizeof(int) * (nr_lines + 2));
		i++;
	}
	return (map);
}

void	free_map(int **map, int nr_lines)
{
	int	i;

	i = 0;
	while (i < nr_lines)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
