/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:32:41 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/10 16:59:14 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Searches for the first occurrence of the 'to_find' substring
within the 'str' string.

str:      The string in which to search for the 'to_find' substring ('haystack')
to_find:  The substring to search for within 'str' ('needle').

Returns:	A pointer to the first occurrence of 'to_find' within 'str' if found,
			or NULL if 'to_find' is not found.
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char haystack1[] = "Hello, World!";
	char needle1[] = "World";

	char haystack2[] = "This is a test";
	char needle2[] = "is";

	char haystack3[] = "Searching for nothing";
	char needle3[] = "";

	char haystack4[] = "No needle to be found";
	char needle4[] = "xxx";


	char *result;
	char *result_strstr;

	// Test case 1
	result_strstr = strstr(haystack1, needle1);
	result = ft_strstr(haystack1, needle1);
	printf("Test 1 Haystack: %s\n", haystack1);
	printf("Test 1 Needle: %s\n", needle1);
	if (result_strstr != NULL)
		printf("Test 1 strstr(): Found at position %ld\n",
			result_strstr - haystack1);
	else
		printf("Test 1 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 1 ft_strstr(): Found at position %ld\n",
			result - haystack1);
	else
		printf("Test 1 ft_strstr(): Not found\n");
	printf(" \n");

	// Test case 2
	result_strstr = strstr(haystack2, needle2);
	result = ft_strstr(haystack2, needle2);
	printf("Test 2 Haystack: %s\n", haystack2);
	printf("Test 2 Needle: %s\n", needle2);
	if (result_strstr != NULL)
		printf("Test 2 strstr(): Found at position %ld\n",
			result_strstr - haystack2);
	else
		printf("Test 2 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 2 ft_strstr(): Found at position %ld\n",
			result - haystack2);
	else
		printf("Test 2 ft_strstr(): Not found\n");
	printf(" \n");


	// Test case 3
	result_strstr = strstr(haystack3, needle3);
	result = ft_strstr(haystack3, needle3);
	printf("Test 3 Haystack: %s\n", haystack3);
	printf("Test 3 Needle: %s\n", needle3);
	if (result_strstr != NULL)
		printf("Test 3 strstr(): Found at position %ld\n",
			result_strstr - haystack3);
	else
		printf("Test 3 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 3 ft_strstr(): Found at position %ld\n",
			result - haystack3);
	else
		printf("Test 3 ft_strstr(): Not found\n");
	printf(" \n");

	// Test case 4
	result_strstr = strstr(haystack4, needle4);
	result = ft_strstr(haystack4, needle4);
	printf("Test 4 Haystack: %s\n", haystack4);
	printf("Test 4 Needle: %s\n", needle4);
	if (result_strstr != NULL)
		printf("Test 4 strstr(): Found at position %ld\n",
			result_strstr - haystack3);
	else
		printf("Test 4 strstr(): Not found\n");

	if (result != NULL)
		printf("Test 4 ft_strstr(): Found at position %ld\n",
			result - haystack3);
	else
		printf("Test 4 ft_strstr(): Not found\n");
	printf(" \n");

	return (0);
}
*/
