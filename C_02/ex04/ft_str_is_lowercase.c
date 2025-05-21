int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
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

// int	main(void)
// {
// 	printf("hello = %d\n",ft_str_is_lowercase("hello"));
// 	printf("$hello = %d\n",ft_str_is_lowercase("$hello"));
// 	printf("___hello = %d\n",ft_str_is_lowercase("___hello"));
// 	printf("Hello = %d\n",ft_str_is_lowercase("Hello"));
// 	printf("HELLO = %d\n",ft_str_is_lowercase("HELLO"));
// 	printf("empty = %d\n",ft_str_is_lowercase(""));
// 	printf("hel15((34lo = %d\n",ft_str_is_lowercase("hel15((34lo"));
// 	printf("13542 = %d\n",ft_str_is_lowercase("13542"));
// 	return (0);
// }
