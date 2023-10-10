/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:35:18 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/05 19:09:18 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	hello[] = "Hello";
// 	printf("%s\n",ft_strupcase(hello));
// 	return (0);
// }
