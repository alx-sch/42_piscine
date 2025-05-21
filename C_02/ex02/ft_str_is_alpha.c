int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a' && str[count] <= 'z')
			|| (str[count] >= 'A' && str [count] <= 'Z'))
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
// 	printf("hello = %d\n",ft_str_is_alpha("hello"));
// 	printf("$hello = %d\n",ft_str_is_alpha("$hello"));
// 	printf("___hello = %d\n",ft_str_is_alpha("___hello"));
// 	printf("Hello = %d\n",ft_str_is_alpha("Hello"));
// 	printf("HELLO = %d\n",ft_str_is_alpha("HELLO"));
// 	printf("empty = %d\n",ft_str_is_alpha(""));
// 	printf("hel15((34lo = %d\n",ft_str_is_alpha("hel15((34lo"));
// 	return (0);
// }
