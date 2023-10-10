/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzubkova, mbaskara, aschenk                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:10:10 by dzubkova          #+#    #+#             */
/*   Updated: 2023/10/01 22:42:58 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
Function prints the first row of a rectangle.
-	Displays the top left corner by default ('/').
-	Counts down the middle columns (lines) and fills
	this row with 'B'.
-	When the middle column counter reaches zero,
	displays the top right corner ('\').
*/
void	print_first_row(int col_total)
{
	int	col_middle;

	col_middle = col_total - 2;
	ft_putchar('/');
	while (col_middle >= 0)
	{
		if (col_middle == 0)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		col_middle--;
	}
}

/*
Function prints the middle rows of a rectangle (if any).
-	Looping through every middle row:
	- Linebreak and prints '*' (left line)/
	- Looping through every middle column: Prints 'space'.
	- Prints '*' (right line), if no (more) middle columns.
*/
void	print_middle_rows(int col_total, int row_total)
{
	int	row_middle;
	int	col_middle;

	row_middle = row_total - 2;
	while (row_middle > 0)
	{
		col_middle = col_total - 2;
		ft_putchar('\n');
		ft_putchar('*');
		while (col_middle >= 0)
		{
			if (col_middle == 0)
			{
				ft_putchar('*');
			}
			else
				ft_putchar(' ');
			col_middle--;
		}
		row_middle--;
	}
}

/*
Function prints the last row of a rectangle (if any).
-	Linebreak and prints bottom left corner ('\').
-	Counts down the middle columns (lines) and fills
	this row with '*'.
-	When the middle column counter reaches zero,
	displays the bottom right corner ('/').
*/
void	print_last_row(int col_total)
{
	int	row_middle;

	row_middle = col_total - 2;
	ft_putchar('\n');
	ft_putchar('\\');
	while (row_middle >= 0)
	{
		if (row_middle == 0)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		row_middle--;
	}
}

/*
Function prints rectangles with specified parameters:
-	int a: Number of columns.
-	int b: Number of rows.

-	Checks if rectangle can be printend (a and b > 0),
	otherwise does nothing.
-	Prints the first row (calling 'print_first_row(a)')
-	If there is more than one row:
	- Prints middle rows (if any), calling 'print_middle_rows(a,b)'.
	- Prints last row, calling 'print_last_row(a)'.
-	Performs linebreak
*/
void	rush(int a, int b)
{
	if (a > 0 && b > 0)
	{
		print_first_row(a);
		if (b > 1)
		{
			print_middle_rows(a, b);
			print_last_row(a);
		}
		ft_putchar('\n');
	}
}
