/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:03:10 by aschenk           #+#    #+#             */
/*   Updated: 2023/09/28 16:48:43 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	flag;

	flag = 'P';
	if (n < 0)
	{
		flag = 'N';
	}
	write(1, &flag, 1);
}

//int	main(void)
//{
//	int	number;
//
//	number = -123;
//	ft_is_negative(number);
//	return (0);
//}
