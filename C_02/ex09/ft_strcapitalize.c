/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:47:45 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/05 19:10:23 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		count;
	int		first_letter;

	count = 0;
	first_letter = 1;
	ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (first_letter)
			{
				str[count] -= 32;
				first_letter = 0;
			}
		}
		else if (str[count] >= '0' && str[count] <= '9')
			first_letter = 0;
		else
			first_letter = 1;
		count++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char test[] = "salut, comment tU Vas ? 42mots quaRante-deux; cInquante+et+un";

	printf("%s\n", test);
	printf("\n");
	printf("%s\n", ft_strcapitalize(test));
	return (0);
}
*/
