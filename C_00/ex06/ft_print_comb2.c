#include <unistd.h>

// using ft_putchar from ex00 to simplify/shorten ft_print_comb2()
// expressions are tricky to put into write() but works with ft_putchar()
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// using int as to be more flexible with math operations
// 'int/10' drops last digit of number -> result is first digit of duplet
// (it's 0 when number is single digit)
// 'int%10' drops the first digit of the number -> second digit of duplet
// result is added to char '0' to convert result to char
void	ft_print_comb2(void)
{
	int	pair_1;
	int	pair_2;

	pair_1 = -1;
	while (pair_1++ < 98)
	{
		pair_2 = pair_1;
		while (pair_2++ < 99)
		{
			ft_putchar('0' + (pair_1 / 10));
			ft_putchar('0' + (pair_1 % 10));
			ft_putchar(' ');
			ft_putchar('0' + (pair_2 / 10));
			ft_putchar('0' + (pair_2 % 10));
			if (pair_1 != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//}
