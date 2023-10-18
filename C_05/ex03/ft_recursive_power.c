/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:40:50 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/18 21:49:56 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, 4));
	return (0);
}
*/
