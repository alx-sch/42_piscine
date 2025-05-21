#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

/*
Valid input for int: -2147483648 -- 2147483647
Character conversion: int (single digit) + '0' -> char
Recursion, unwinds once first return reached and then goes 'out'a again:
-	ft_putnbr(-1234) calls ft_putnbr(123); prints "-" (a) (outside rec.)
	(and) "4" (e)
-	ft_putbr(123) calls ft_putnbr(12); prints "3" (d)
-	ft_putnbr(12) calls ft_putnbr(1); prints "2 (c)
-	ft_putnbr(1) prints "1" (b)
printing order: a, b, c, d, e
*/

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*
int	main(void)
{
	int	nb;

	nb = 2147483647;
	ft_putnbr(nb);
	return (0);
}
*/
