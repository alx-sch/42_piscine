int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char text[] = "Hello!";
	printf("Length of '%s': %d\n", text, ft_strlen(text));
	return (0);
}
*/
