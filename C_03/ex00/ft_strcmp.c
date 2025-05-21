/*
ft_strcmp - Compare two strings lexicographically

This function compares two strings 's1' and 's2' character by character
until it finds a difference or reaches the end of one of the strings.

If a difference is found:
	- If 's1' is less than 's2', it returns a negative value.
	- If 's1' is greater than 's2', it returns a positive value.

If both strings are equal, it returns 0 ('\0' - '\0').
If one string is shorter than the other, it returns the ASCII value of the
'protruding' char (negative when s1 is shorter than s2; '\0' ASCII value: 0).

Parameters:
	s1 - The first string to compare.
	s2 - The second string to compare.

Return:
An integer value:
	- Negative if s1 is less than s2
	- Positive if s1 is greater than s2
	- 0 if s1 is equal to s2
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		test;
	char	string1[50];
	char	string2[50];

	test = 1;
	strcpy(string1, "ABC");
	strcpy(string2, "ABC");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);
	printf("Result strcmp(): %d\n", strcmp(string1, string2));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strcmp(string1, string2));

	///

	test = 2;
	strcpy(string1, "AB");
	strcpy(string2, "ABC");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);
	printf("Result strcmp(): %d\n", strcmp(string1, string2));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strcmp(string1, string2));

	///

	test = 3;
	strcpy(string1, "ABC");
	strcpy(string2, "AB");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);
	printf("Result strcmp(): %d\n", strcmp(string1, string2));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strcmp(string1, string2));

	///

	test = 3;
	strcpy(string1, "$\%&@*#$)");
	strcpy(string2, "$ \%&@*#$)");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);
	printf("Result strcmp(): %d\n", strcmp(string1, string2));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strcmp(string1, string2));

	///

	test = 4;
	strcpy(string1, "1 Apple");
	strcpy(string2, "1 Banana");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);
	printf("Result strcmp(): %d\n", strcmp(string1, string2));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strcmp(string1, string2));

	return (0);
}
*/
