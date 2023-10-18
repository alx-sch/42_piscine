/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:41:09 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/18 21:46:33 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	last_fibo;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		last_fibo = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
		return (last_fibo);
	}
	else
		return (-1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("-42 = %d\n", ft_fibonacci(-42));
	printf("0 = %d\n", ft_fibonacci(0));
	printf("1 = %d\n", ft_fibonacci(1));
	printf("2 = %d\n", ft_fibonacci(2));
	printf("3 = %d\n", ft_fibonacci(3));
	printf("4 = %d\n", ft_fibonacci(4));
	printf("5 = %d\n", ft_fibonacci(5));
	printf("6 = %d\n", ft_fibonacci(6));
	printf("7 = %d\n", ft_fibonacci(7));
	printf("8 = %d\n", ft_fibonacci(8));
	printf("9 = %d\n", ft_fibonacci(9));
	return (0);
}
*/
