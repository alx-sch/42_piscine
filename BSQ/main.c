#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		parse_map(char *data, int **map, int nr_lines, char *legend);
int		read_first_line(char *data, int *p_nr_lines, char *legend);
int		read_line(char *line, int row, int **map, char *legend);
char	*extract_line(char *data, char *line);
int		valid_legend(char *legend);
char	*ft_strcat(char *dest, char *src);
void	print_map(int **map, int nr_lines, char *legend);
int		maximmum(int r, int c, int s, int n);
int		read_filename(char *filename, char *data);
int		build_map(char *data, int nr_lines, char *legend);
int		solve(char *filename, int read_from_input);
int		process_data(char *data);
void	print_line_number(int line_count, int nr_lines);
int		save_input_map(int nr_lines);
int		read_from_standard_input(char *data);
int		sum(int **map, int r, int c, int n);
void	find_solution(int *solution, int **map, int nr_lines);
void	fill_map(int **map, int *rcs_solution);
void	solve_map(int **map, int nr_lines);
int		**making_the_map(int lines);
void	free_map(int **map, int nr_lines);
int		char_in_string(char c, char *string);
int		ft_atoi(char *string);
int		ft_strlen(char *string);
void	ft_strcpy(char *dest, char *source);


int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		if (solve("", 1) == 0)
			write(1, "map error\n", 10);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (solve(argv[i], 0) == 0)
				write(1, "map error\n", 10);
			i++;
		}
	}
}
