/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:29:20 by aschenk           #+#    #+#             */
/*   Updated: 2023/09/28 16:42:18 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <math.h>

// displays char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// returns a divisor so that 'nb / divisor' results in first digit (int)
// example: nb = 2314 -> 2314 / 1000 = 2 (int)
// also returns the digits on the right: nb % divisor
int	ft_create_divisor(int nb)
{
	int	length;
	int	divisor;

	length = 0;
	divisor = 1;
	if (nb == 0)
	{
		length = 1;
	}
	else
	{
		while (nb != 0)
		{
			nb = nb / 10;
			length++;
		}
	}
	while (length > 1)
	{
		divisor *= 10;
		length--;
	}
	return (divisor);
}

int	ft_check_neg(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	divisor;

	divisor = ft_create_divisor(nb);
	nb = ft_check_neg(nb);
	while (divisor > 0)
	{
		ft_putchar('0' + (nb / divisor));
		nb = nb % divisor;
		divisor /= 10;
	}
}

//int	main(void)
//{
//	int	nb;
//
//	nb = -4232;
//	ft_putnbr(nb);
//	return (0);
//}
