#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* In this file: */
int		parse_map(char *data, int **map, int nr_lines, char *legend);
int		read_first_line(char *data, int *p_nr_lines, char *legend);
int		read_line(char *line, int row, int **map, char *legend);
char	*extract_line(char *data, char *line);
int		valid_legend(char *legend);

/* In read_from_file.c file */
int		read_filename(char *filename, char *data);
int		build_map(char *data, int nr_lines, char *legend);
void	print_map(int **map, int nr_lines, char *legend);

/* In solve.c file: */
int		sum(int **map, int r, int c, int size);
void	find_solution(int *solution, int **map, int nr_lines);
void	fill_map(int **map, int *rcs_solution);
void	solve_map(int **map, int nr_lines);

/* In test.c file: */
int		**making_the_map(int lines);
void	free_map(int **map, int nr_lines);

/* In useful functions file: */
int		char_in_string(char c, char *string);
int		ft_atoi(char *string);
int		ft_strlen(char *string);
void	ft_strcpy(char *dest, char *source);

/***********************************************************************/

int	parse_map(char *data, int **map, int nr_lines, char *legend)
{
	char	*line;
	char	check;
	int		line_counter;

	if (ft_strlen(data) < 6)
		return (0);
	check = 1;
	line = (char *)malloc(sizeof(char) * 20);
	data = extract_line(data, line);
	line_counter = 0;
	while (*data)
	{
		data = extract_line(data, line);
		if (ft_strlen(line) != nr_lines)
			check = 0;
		if (check)
			check *= read_line(line, line_counter, map, legend);
		line_counter++;
	}
	free(line);
	if (check == 0)
		return (0);
	if (line_counter != nr_lines)
		return (0);
	return (1);
}

/***********************************************************************/

char	*extract_line(char *data, char *line)
{
	while ((*data) && (*data != '\n'))
	{
		*line = *data;
		line++;
		data++;
	}
	*line = '\0';
	if (*data)
		data++;
	return (data);
}

/*******************************************************************/

int	read_first_line(char *line0, int *p_nr_lines, char *legend)
{
	int	length;
	int	i;

	length = ft_strlen(line0);
	if (*(line0 + (length - 1)) == '\n')
	{
		*(line0 + (length - 1)) = '\0';
		length = length - 1;
	}
	if (length < 4)
		return (0);
	ft_strcpy(legend, line0 + (length - 3));
	*(line0 + (length - 3)) = '\0';
	if (valid_legend(legend) == 0)
		return (0);
	i = 0;
	while (i < length - 3)
	{
		if (!(char_in_string(*(line0 + i), "0123456789")))
			return (0);
		i++;
	}
	*p_nr_lines = ft_atoi(line0);
	return (*p_nr_lines);
}

/********************************************************************/

int	read_line(char *line, int row, int **map, char *legend)
{
	int	column;

	column = 0;
	while (*line)
	{
		if (*line == legend[0])
			map[row][column] = 0;
		else if (*line == legend[1])
			map[row][column] = 1;
		else
			return (0);
		column++;
		line++;
	}
	return (1);
}
/******************************************************/

int	valid_legend(char *legend)
{
	if (*legend == *(legend + 1))
		return (0);
	if (*(legend + 1) == *(legend + 2))
		return (0);
	if (*legend == *(legend + 2))
		return (0);
	return (1);
}
