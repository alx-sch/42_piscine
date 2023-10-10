/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_int_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:56:37 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/08 19:07:02 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Initializes an integer array with zeros.

This function takes an integer array 'arr' and assigns a value of 0 to each
element of the array. It performs this operation for all 16 elements of the
array, ensuring that they are all set to zero.

@param arr  The integer array to be initialized with zeros (expectes size: 16)
*/
void	initialize_int_arr(int arr[])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		arr[i] = 0;
		i++;
	}
}
