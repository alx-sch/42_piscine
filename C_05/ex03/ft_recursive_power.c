int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, 4));
	return (0);
}
*/
