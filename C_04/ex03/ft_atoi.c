/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:28:33 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/11 16:21:15 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   isspace()
              checks for white-space characters.  In the "C" and  "POSIX"  lo‐
              cales,  these are: space, form-feed ('\f'), newline ('\n'), car‐
              riage return ('\r'), horizontal tab  ('\t'),  and  vertical  tab
              ('\v').

Integer conversion: char - '0' -> int
*/

/*
-	first while loop: Pointer moves to the first non-whitespace position.
-	second while loop: entered when pointing to '-' or '+'.
	-	if statement: multiplies neg_flag by -1 every time a '-' is encountered.
- 	third while loop: entered when pointed at digits (base 10: 0-9)
	- multiplies int_nbr by 10.
	- int convers char pointed at and adds int_nbr.
	- pointer moves to next position.
	e.g: 345 ->	0 * 10 = 0; 3 + 0 		= 3
				3 * 10 = 30; 4 + 30 	= 34
				34 * 10 = 340; 5 + 340 	= 345
- 	reurns int_nbr * neg_flag (either 1 or -1)
*/
int	ft_atoi(char *str)
{
	int	neg_flag;
	int	int_nb;

	neg_flag = 1;
	int_nb = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_flag *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		int_nb *= 10;
		int_nb = (*str - '0') + int_nb;
		str++;
	}
	return (neg_flag * int_nb);
}

/*
#include <stdio.h>

int	main(void)
{
	char number_string[] = "		 	---+--+24524_0as";
	printf("Character: '%s'\n", number_string);
	printf("Int: '%d'\n", ft_atoi(number_string));
	return (0);
}
*/
