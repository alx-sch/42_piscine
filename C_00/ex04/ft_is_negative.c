#include <unistd.h>

void	ft_is_negative(int n)
{
	char	flag;

	flag = 'P';
	if (n < 0)
	{
		flag = 'N';
	}
	write(1, &flag, 1);
}

//int	main(void)
//{
//	int	number;
//
//	number = -123;
//	ft_is_negative(number);
//	return (0);
//}
