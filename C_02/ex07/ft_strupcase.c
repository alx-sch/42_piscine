char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	hello[] = "Hello";
// 	printf("%s\n",ft_strupcase(hello));
// 	return (0);
// }
