/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:56:46 by aafuni            #+#    #+#             */
/*   Updated: 2023/10/19 09:48:13 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* In this file: */

int		sum(int **map, int r, int c, int n);
void	find_solution(int *solution, int **map, int nr_lines);
void	fill_map(int **map, int *rcs_solution);
void	solve_map(int **map, int nr_lines);

/* In this read_file.c file: */
int		read_dictionary(char *filename, char *data);
int		parse_map(char *data, int **map, int nr_lines, char *legend);
int		read_first_line(char *data, int *p_nr_lines, char *legend);
int		read_line(char *line, int row, int **map, char *legend);
char	*extract_line(char *data, char *line);
int		**build_map(char *data, int **map, int nr_lines, char *legend);
void	print_map(int **map, int nr_lines, char *legend);

/* In test.c file: */
int		**making_the_map(int lines);
void	free_map(int **map);

/* In read_standard_input.c file: */
int		read_from_standard_input(char *data);

/* In useful functions file: */
int		char_in_string(char c, char *string);
int		ft_atoi(char *string);
int		ft_strlen(char *string);
void	ft_strcpy(char *dest, char *source);
int		rc_in_limit(int r, int c, int s, int n);

/*************************************************************/

int	sum(int **map, int r, int c, int size)
{
	int	i;
	int	j;
	int	sum;

	sum = 0;
	i = r;
	while (i < r + size)
	{
		j = c;
		while (j < c + size)
		{
			sum += map[i][j];
			j++;
		}
		i++;
	}
	return (sum);
}

/*******************************************************************/

void	find_solution(int *rcs_solution, int **map, int n)
{
	int	r;
	int	c;
	int	s;

	s = 0;
	r = 0;
	while (r + s < n)
	{
		c = 0;
		while (c + s < n)
		{
			while (rc_in_limit(r, c, s, n) && !sum (map, r, c, s))
			{
				s = s + 1;
				rcs_solution[0] = r;
				rcs_solution[1] = c;
				rcs_solution[2] = s;
			}
			c++;
		}
		r++;
	}
}

/*****************************************************************/

void	fill_map(int **map, int *rcs_solution)
{
	int	i;
	int	j;

	i = rcs_solution[0];
	while (i < rcs_solution[0] + rcs_solution[2])
	{
		j = rcs_solution[1];
		while (j < rcs_solution[1] + rcs_solution[2])
		{
			map[i][j] = 2;
			j++;
		}
		i++;
	}
}

/**************************************************************/

void	solve_map(int **map, int nr_lines)
{
	int	*rcs_solution;

	rcs_solution = (int *)malloc(sizeof(int) * 4);
	find_solution(rcs_solution, map, nr_lines);
	fill_map(map, rcs_solution);
	free(rcs_solution);
}
