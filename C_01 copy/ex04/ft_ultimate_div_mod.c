void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = (*a / *b);
	*b = (aux % *b);
}