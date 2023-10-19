/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:01:10 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/19 09:48:24 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

/*In this file: */
int		char_in_string(char c, char *string);
int		ft_atoi(char *string);
int		ft_strlen(char *string);
void	ft_strcpy(char *dest, char *source);

/***************************************/
int	char_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

/****************************************/
int	ft_strlen(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		position = position + 1;
	}
	return (position);
}

/*****************************************/
int	ft_atoi(char *str)
{
	int		number;
	char	c;

	number = 0;
	c = *str;
	while ((*str >= '0') && (*str <= '9'))
	{
		c = *str;
		number = number * 10 + (c - '0');
		str++;
	}
	return (number);
}

/******************************************************/
void	ft_strcpy(char *dest, char *src)
{
	int		i;
	char	c;

	i = 0;
	while (*(src + i))
	{
		c = *(src + i);
		*(dest + i) = c;
		i = i + 1;
	}
	*(dest + i) = '\0';
}
