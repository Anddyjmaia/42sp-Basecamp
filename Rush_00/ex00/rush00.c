void	ft_putchar(char c);

void	rush(int x, int y)
{			
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (j == y && i == x) || (j == 1 && i == x) || ( j == y && i == 1))
				ft_putchar ('o');
			else if ( i == 1 || i == x)
				ft_putchar('|');
			else if (j == 1 || j == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		i = 1;
		ft_putchar('\n');
		j++;
	}
}
