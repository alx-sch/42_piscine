int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
	return (0);
}
*/
