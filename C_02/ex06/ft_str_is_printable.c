/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:34:43 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/05 18:36:56 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  The ASCII characters with codes in the range 0 to 31 and 127 (decimal) are
//  invisible, i.e., they do not represent printable characters on the screen.

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// printf("hello = %d\n",ft_str_is_printable("hello"));
// printf("$hello>.+ = %d\n",ft_str_is_printable("$hello>.+"));
// printf("___hello = %d\n",ft_str_is_printable("___hello"));
// printf(" Hello = %d\n",ft_str_is_printable(" Hello"));
// printf("HEL""LO = %d\n",ft_str_is_printable("HEL""LO"));
// printf("empty = %d\n",ft_str_is_printable(""));
// printf("hel15((34lo = %d\n",ft_str_is_printable("hel15((34lo"));
// return (0);
// }
