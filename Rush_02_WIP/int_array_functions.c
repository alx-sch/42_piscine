int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
void	int_to_str(char *dest, int n);

void	convert_string_to_2d_int_array(char *input, int output[13][3])
{
	int	len;
	int	current_index;
	int	i;
	int	j;

	len = ft_strlen(input);
	current_index = len - 1;
	i = 12;
	while (i >= 0)
	{
		j = 2;
		while (j >= 0)
		{
			if (current_index >= 0)
			{
				output[i][j] = input[current_index] - '0';
				current_index--;
			}
			else
				output[i][j] = 0;
			j--;
		}
		i--;
	}
}

void	initialize_speak_int_array(int array_of_arrays[13][4])
{
	int	i;
	int	j;
	int	multiplier;

	i = 0;
	multiplier = 1;
	while (i < 13)
	{
		j = 0;
		while (j < 4)
		{
			if (j == 1)
				array_of_arrays[i][j] = 100;
			else
				array_of_arrays[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	remove_hundreds(int intArray[13][4])
{
	int	i;

	i = 0;
	while (i < 13)
	{
		if (intArray[i][0] == 0 && intArray[i][1] == 100)
			intArray[i][1] = 0;
		i++;
	}
}

void	deal_with_tens(int intArray[13][4])
{
	int	i;

	i = 0;
	while (i < 13)
	{
		if (intArray[i][2] == 10)
		{
			intArray[i][2] += intArray[i][3];
			intArray[i][3] = 0;
		}
		i++;
	}
}

void	fill_speak_int_array(int array[13][4], int values[13][3])
{
	int	i;

	i = 0;
	while (i < 13)
	{
		array[i][0] = values[i][0];
		array[i][1] = 100;
		array[i][2] = values[i][1] * 10;
		array[i][3] = values[i][2];
		i++;
	}
}
