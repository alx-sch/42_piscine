/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:28:01 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/11 10:44:57 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Ok, working with pointers now:
'while (*str)' is a common idiom for iteration through a string char by char
until numm terminator is encountered.
write() expects a pointer/address to single char, not just a single char iteself.
str++ increments the pointer to the next char.
*/
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*
'ptr = test' works as no address-of operator & is needed when assigning a pointer
to a string or array.
*/

/*
int	main(void)
{
	char	test[] = "Hello World!";
	char	*ptr;

	ptr = test;
	ft_putstr(ptr);
	return (0);
}
*/
