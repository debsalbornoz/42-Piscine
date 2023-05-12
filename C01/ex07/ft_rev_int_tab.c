#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
	}
}

int main(void)
{
	int tab [] = { 0,1,2,3,4,5};
	ft_rev_int_tab(tab,6);
	for (int i = 0; i < 6 ; i++)
	{
	printf("%i" , tab[i]);
	}
	printf("\n");
}
