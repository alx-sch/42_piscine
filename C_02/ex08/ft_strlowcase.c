/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:43:24 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/05 18:45:22 by aschenk          ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	char	hello[] = "HeLloO";
// 	printf("%s\n",ft_strlowcase(hello));
// 	return (0);
// }
