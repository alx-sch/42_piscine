/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:32:24 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/05 17:26:37 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0' )
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a' && str[count] <= 'z')
			|| (str[count] >= 'A' && str [count] <= 'Z'))
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
// 	printf("hello = %d\n",ft_str_is_alpha("hello"));
// 	printf("$hello = %d\n",ft_str_is_alpha("$hello"));
// 	printf("___hello = %d\n",ft_str_is_alpha("___hello"));
// 	printf("Hello = %d\n",ft_str_is_alpha("Hello"));
// 	printf("HELLO = %d\n",ft_str_is_alpha("HELLO"));
// 	printf("empty = %d\n",ft_str_is_alpha(""));
// 	printf("hel15((34lo = %d\n",ft_str_is_alpha("hel15((34lo"));
// 	return (0);
// }
