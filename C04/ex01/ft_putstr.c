
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
			write(1, &str[i], 1);
		i++;
	}
}