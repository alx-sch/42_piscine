int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int   main(void)
// {
//         printf("12456 = %d\n",ft_str_is_numeric("12456"));
//         printf("$123 = %d\n",ft_str_is_numeric("$123"));
//         printf("___23232 = %d\n",ft_str_is_numeric("___23232"));
//         printf("Hello = %d\n",ft_str_is_numeric("Hello"));
//         printf("HELLO = %d\n",ft_str_is_numeric("HELLO"));
//         printf("empty = %d\n",ft_str_is_numeric(""));
//         printf("hel15((34lo = %d\n",ft_str_is_numeric("hel15((34lo"));
//         return (0);
// }
