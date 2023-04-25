#include <unistd.h>

void	combinations(int first_combination, int second_combination)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = (first_combination / 10 + '0');
	b = (first_combination % 10 + '0');
	c = (second_combination / 10 + '0');
	d = (second_combination % 10 + '0');
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (first_combination != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first_combination;
	int	second_combination;

	first_combination = 0;
	while (first_combination <= 98)
	{
		second_combination = first_combination + 1;
		while (second_combination <= 99)
		{
			combinations(first_combination, second_combination);
			second_combination++;
		}
		first_combination++;
	}
}