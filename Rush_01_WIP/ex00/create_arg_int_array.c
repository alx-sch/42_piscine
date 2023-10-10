/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_arg_int_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:58:01 by aschenk           #+#    #+#             */
/*   Updated: 2023/10/08 19:05:16 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Converts a string of characters to an integer array.

This function parses the input string 'str_arg' and extracts numeric characters
within the range '1' to '4'. It converts these characters to integers and stores
them in the 'int_arr' array. The function continues until it encounters the null
terminator ('\0') in the input string.

@param str_arg  The input string containing numeric characters.
@param int_arr  The integer array where extracted values are stored.
*/
void	create_arg_int_array(const char *str_arg, int int_arr[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str_arg[i] != '\0')
	{
		if (str_arg[i] >= '1' && str_arg[i] <= '4')
		{
			int_arr[j] = (str_arg[i] - '0');
			j++;
		}
		i++;
	}
}
