/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:28:49 by aschenk           #+#    #+#             */
/*   Updated: 2023/09/28 16:46:14 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	combo[3];
	char	delimiter[2];

	combo[0] = '0';
	delimiter[0] = ',';
	delimiter[1] = ' ';
	while (combo[0] <= '7')
	{
		combo[1] = combo[0] + 1;
		while (combo[1] <= '8')
		{
			combo[2] = combo[1] + 1;
			while (combo[2] <= '9')
			{
				write(1, combo, 3);
				if (combo[0] != '7')
				{
					write(1, delimiter, 2);
				}
				combo[2]++;
			}
			combo[1]++;
		}
		combo[0]++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
