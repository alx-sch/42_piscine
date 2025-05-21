void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	remain;

	div = *a / *b;
	remain = *a % *b;
	*a = div;
	*b = remain;
}
