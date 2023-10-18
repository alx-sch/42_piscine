/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:41:19 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/18 21:34:08 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result < nb)
	{
		if (nb == result * result)
			return (result);
		else if (result >= 46341)
			return (0);
		result++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_sqrt(144));
}
*/
