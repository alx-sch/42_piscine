/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:32:31 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/11 11:36:58 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatenates the characters of 'src' onto the end of 'dest'
and properly null-terminates the resulting string.

dest:	Destination string.
src:	Source string to be appended.

Returns: A pointer to the destination string 'dest' (now concatenated).
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

	i = 0;
	dest_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[i] != '\0')
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
	char	string1[50];
	char	string2[50];
	char	copy_string1[50];

	//// TEST1 ////

	test = 1;
	strcpy(string1, "TEST A!");
	strcpy(string2, "TEST B!");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);

	strcpy(copy_string1, string1);
	printf("Result strcmp(): %s\n", strcat(copy_string1, string2));

	strcpy(copy_string1, string1);
	printf("Result 'my' ft_strcmp(): %s\n", ft_strcat(copy_string1, string2));

	//// TEST2 ////

	test = 2;
	strcpy(string1, "Hello World!");
	strcpy(string2, " Hello Earth!");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);

	strcpy(copy_string1, string1);
	printf("Result strcmp(): %s\n", strcat(copy_string1, string2));

	strcpy(copy_string1, string1);
	printf("Result 'my' ft_strcmp(): %s\n", ft_strcat(copy_string1, string2));

	//// TEST3 ////

	test = 3;
	strcpy(string1, "Hello");
	strcpy(string2, "Hello Earth!");

	printf(" \n");
	printf("== TEST %d==\nS1: %s\nS2: %s\n", test, string1, string2);

	strcpy(copy_string1, string1);
	printf("Result strcmp(): %s\n", strcat(copy_string1, string2));

	strcpy(copy_string1, string1);
	printf("Result 'my' ft_strcmp(): %s\n", ft_strcat(copy_string1, string2));

	return (0);
}
*/
