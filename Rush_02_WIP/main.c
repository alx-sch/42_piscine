#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void	int_to_str(char *dest, int n);
void	convert_string_to_2d_int_array(char *input, int output[13][3]);
void	initialize_speak_int_array(int array_of_arrays[13][4]);
void	fill_speak_int_array(int result[13][4], int values[13][3]);
void	remove_hundreds(int intArray[13][4]);
void	deal_with_tens(int intArray[13][4]);
void	initialize_char_array(char *charArray[13][5]);
void	fill_c_array_with_int_val(char *charArray[13][5], int intArray[13][4]);
void	set_unneeded_rows_to_empty(char *charArray[13][5]);
void	extr_result(char *charArray[13][5], char *extractedArray[], int *size);

void	print_result_array(char *extractedArray[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr(extractedArray[i]);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("\n");
}

void	allocate_memory_char_array(char *char_array[13][5])
{
	int	i;
	int	j;

	i = 0;
	while (i < 13)
	{
		j = 0;
		while (j < 5)
		{
			char_array[i][j] = (char *)malloc(40);
			if (char_array[i][j] == NULL)
			{
				return ;
			}
			j++;
		}
		i++;
	}
}

void	free_memory_char_array(char *char_array[13][5])
{
	int	i;
	int	j;

	i = 0;
	while (i < 13)
	{
		j = 0;
		while (j < 5)
		{
			free(char_array[i][j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		int_array[13][3];
	int		speak_int_array[13][4];
	char	*char_array[13][5];
	char	*result_array[100];
	int		size;

	if (argc == 2)
	{
		allocate_memory_char_array(char_array);
		convert_string_to_2d_int_array(argv[1], int_array);
		initialize_speak_int_array(speak_int_array);
		fill_speak_int_array(speak_int_array, int_array);
		remove_hundreds(speak_int_array);
		deal_with_tens(speak_int_array);
		initialize_char_array(char_array);
		fill_c_array_with_int_val(char_array, speak_int_array);
		set_unneeded_rows_to_empty(char_array);
		extr_result(char_array, result_array, &size);
		print_result_array(result_array, size);
		free_memory_char_array(char_array);
	}
	else
		ft_putstr("Dict Error\\n.\n");
	return (0);
}
