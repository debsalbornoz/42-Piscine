
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
	i++;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i - 1] < 'a'
				|| str[i - 1] > 'z') && (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}
