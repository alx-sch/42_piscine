int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
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
// 	printf("hello = %d\n",ft_str_is_uppercase("hello"));
// 	printf("$hello = %d\n",ft_str_is_uppercase("$hello"));
// 	printf("___hello = %d\n",ft_str_is_uppercase("___hello"));
// 	printf("Hello = %d\n",ft_str_is_uppercase("Hello"));
// 	printf("HELLO = %d\n",ft_str_is_uppercase("HELLO"));
// 	printf("empty = %d\n",ft_str_is_uppercase(""));
// 	printf("hel15((34lo = %d\n",ft_str_is_uppercase("hel15((34lo"));
// 	return (0);
// }
