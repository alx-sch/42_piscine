/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:30:22 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/18 22:55:30 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strncpy is a function in the C standard library that copies the first n
characters from the source string to the destination string. Here's a general
breakdown of how it works:

It starts copying characters from the source string to the destination string,
one by one, until it has copied n characters or it encounters a null
character ('\0') in the source string.

If a null character is found in the source string before n characters have
been copied, strncpy will fill the remaining characters in the destination
string with null characters until n characters have been written.

The destination string may not be null-terminated if the length of the
source string is n or more.

The function then returns the destination string.
*/

// unsigned int -> only non-negative int
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char source[] = "TEST";
	char dest[20];
	ft_strncpy(dest, source, 3);
	printf("%s", dest);
	return (0);
}
*/
