/*
ft_strncmp - Compare the first 'n' characters of two strings

This function compares the first 'n' characters of two strings, 's1' and 's2'.
It stops comparing when it finds a difference, reaches the end of either
string, or already compared 'n' characters, whichever comes first.

If a difference is found:
  - If 's1' is less than 's2', it returns a negative value.
  - If 's1' is greater than 's2', it returns a positive value.

If the first 'n' characters of both strings are equal, it returns 0
If 'n' is greater than the length of one or both strings,
it considers the remaining characters as null terminators (ASCII value: 0).

Parameters:
  s1 - The first string to compare.
  s2 - The second string to compare.
  n - The maximum number of characters to compare.

Return:
  An integer value:
  - Negative if the first 'n' characters of s1 are less than s2
  - Positive if the first 'n' characters of s1 are greater than s2
  - 0 if the first 'n' characters of s1 are equal to s2
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*/
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		test;
	int		n;
	char	string1[50];
	char	string2[50];

	//// TEST1 ////

	test = 1;
	n = 5;
	strcpy(string1, "Hello World!");
	strcpy(string2, "Hello World!");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);
	printf("Result strcmp(): %d\n", strncmp(string1, string2, n));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strncmp(string1, string2, n));

	//// TEST2 ////

	test = 2;
	n = 8;
	strcpy(string1, "Hello World!");
	strcpy(string2, "Hello Earth!");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);
	printf("Result strcmp(): %d\n", strncmp(string1, string2, n));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strncmp(string1, string2, n));

	//// TEST3 ////

	test = 3;
	n = 8;
	strcpy(string1, "Hello");
	strcpy(string2, "Hello Earth!");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);
	printf("Result strcmp(): %d\n", strncmp(string1, string2, n));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strncmp(string1, string2, n));

	//// TEST 4 ////

	test = 4;
	n = 8;
	strcpy(string1, "1234567890");
	strcpy(string2, "12345678");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);
	printf("Result strcmp(): %d\n", strncmp(string1, string2, n));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strncmp(string1, string2, n));

	//// TEST 5 ////

	test = 5;
	n = 8;
	strcpy(string1, "1234567890");
	strcpy(string2, "1234567");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\nn:%d\n", test, string1, string2, n);
	printf("Result strcmp(): %d\n", strncmp(string1, string2, n));
	printf("Result 'my' ft_strcmp(): %d\n", ft_strncmp(string1, string2, n));

	return (0);
}
*/
