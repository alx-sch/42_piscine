int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
*/
