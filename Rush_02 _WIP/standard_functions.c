/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:43:44 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/15 21:13:51 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	int_to_str(char *dest, int n)
{
	char	temp[37];
	int		i;
	int		j;

	i = 0;
	if (n == 0)
		temp[i++] = '0';
	else
	{
		while (n > 0)
		{
			temp[i++] = '0' + (n % 10);
			n /= 10;
		}
	}
	j = 0;
	while (i > 0)
		dest[j++] = temp[--i];
	dest[j] = '\0';
}
