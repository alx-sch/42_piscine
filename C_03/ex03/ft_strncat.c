/*
Concatenates up to 'nb' characters of 'src' onto the end of 'dest'
and properly null-terminates the resulting string.

dest:	Destination string.
src:	Source string to be appended.
nb:		Maximum number of characters from 'scr' to append.

Returns: Destination string 'dest' (now concatenated).
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_length;
	unsigned int	i;

	i = 0;
	dest_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_length] = src[i];
		i++;
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int		test;
	int		n;
	char	string1[50];
	char	string2[50];
	char	copy_string1[50];

	//// TEST1 ////

	test = 1;
	n = 3;
	strcpy(string1, "ABC ");
	strcpy(string2, "1234567");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);

	strcpy(copy_string1, string1);
	printf("Result strcmp(): %s\n", strncat(copy_string1, string2, n));

	strcpy(copy_string1, string1);
	printf("Result 'my' ft_strcmp(): %s\n",
		ft_strncat(copy_string1, string2, n));

	//// TEST2 ////

	test = 1;
	n = 10;
	strcpy(string1, "ABC ");
	strcpy(string2, "1234567");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);

	strcpy(copy_string1, string1);
	printf("Result strcmp(): %s\n", strncat(copy_string1, string2, n));

	strcpy(copy_string1, string1);
	printf("Result 'my' ft_strcmp(): %s\n",
		ft_strncat(copy_string1, string2, n));

	return (0);
}
*/
