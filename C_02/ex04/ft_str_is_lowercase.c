/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:33:23 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/05 17:41:24 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
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
// 	printf("hello = %d\n",ft_str_is_lowercase("hello"));
// 	printf("$hello = %d\n",ft_str_is_lowercase("$hello"));
// 	printf("___hello = %d\n",ft_str_is_lowercase("___hello"));
// 	printf("Hello = %d\n",ft_str_is_lowercase("Hello"));
// 	printf("HELLO = %d\n",ft_str_is_lowercase("HELLO"));
// 	printf("empty = %d\n",ft_str_is_lowercase(""));
// 	printf("hel15((34lo = %d\n",ft_str_is_lowercase("hel15((34lo"));
// 	printf("13542 = %d\n",ft_str_is_lowercase("13542"));
// 	return (0);
// }
