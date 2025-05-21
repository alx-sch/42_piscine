char	*ft_strcpy(char *dest, char *src);

void	initialize_empty_string(char *str)
{
	ft_strcpy(str, "");
}

void	initialize_array_row(char *charArray[13][5], int index)
{
	char	*values[13];
	int		j;

	values[0] = "1000000000000000000000000000000000000";
	values[1] = "1000000000000000000000000000000000";
	values[2] = "1000000000000000000000000000000";
	values[3] = "1000000000000000000000000000";
	values[4] = "1000000000000000000000000";
	values[5] = "1000000000000000000000";
	values[6] = "1000000000000000000";
	values[7] = "1000000000000000";
	values[8] = "1000000000000";
	values[9] = "1000000000";
	values[10] = "1000000";
	values[11] = "1000";
	values[12] = "";
	j = 0;
	while (j < 5)
	{
		if (j == 4)
			ft_strcpy(charArray[index][j], values[index]);
		else
			initialize_empty_string(charArray[index][j]);
		j++;
	}
}

void	initialize_char_array(char *(*charArray)[5])
{
	int	i;

	i = 0;
	while (i < 13)
	{
		initialize_array_row(charArray, i);
		i++;
	}
}
