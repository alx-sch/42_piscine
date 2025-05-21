int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb >= 13))
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(12));
	return (0);
}
*/
