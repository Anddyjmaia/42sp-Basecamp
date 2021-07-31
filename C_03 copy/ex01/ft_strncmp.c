int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;
	unsigned char	d;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			a = s1[i];
			b = s2[i];
			return (a - b);
		}
		i++;
	}
	if (i < n && ((s2[i] != '\0' && s1[i] == '\0')
			|| (s1[i] != '\0' && s2[i] == '\0')))
	{
		c = s1[i];
		d = s2[i];
		return (c - d);
	}
	return (0);
}
