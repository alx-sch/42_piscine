#include <stdlib.h>

void	int_to_str(char *dest, int n);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

void	fill_c_array_with_int_val(char *(*charArray)[5], int intArray[13][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 13)
	{
		j = 0;
		while (j < 4)
		{
			if (intArray[i][j] == 0)
				charArray[i][j][0] = '\0';
			else
				int_to_str(charArray[i][j], intArray[i][j]);
			j++;
		}
		i++;
	}
}

void	set_unneeded_rows_to_empty(char *(*charArray)[5])
{
	int	i;

	i = 0;
	while (i < 13)
	{
		if (charArray[i][0][0] == '\0' && charArray[i][1][0] == '\0'
		&& charArray[i][2][0] == '\0' && charArray[i][3][0] == '\0')
			charArray[i][4][0] = '\0';
		i++;
	}
}

void	extr_result(char *(*charArray)[5], char *extractedArray[], int *size)
{
	int	index;
	int	i;
	int	j;

	index = 0;
	i = 0;
	while (i < 13)
	{
		j = 0;
		while (j < 5)
		{
			if (charArray[i][j][0] != '\0')
			{
				extractedArray[index] = malloc(ft_strlen(charArray[i][j]) + 1);
				ft_strcpy(extractedArray[index], charArray[i][j]);
				index++;
			}
			j++;
		}
		i++;
	}
	*size = index;
}

void	allocate_char_array(char *char_array[13][5])
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
				return ;
			j++;
		}
		i++;
	}
}
