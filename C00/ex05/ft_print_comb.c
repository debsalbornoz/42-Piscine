#include <unistd.h>

void	print(char x, char y, char z)
{
	if (x < y && y < z)
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
		if (x != '7' || y != '8' || z != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{
				print(x, y, z);
				z++;
			}
			z = '0';
			y++;
		}
		y = '0';
		x++;
	}
}
