#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int tab [] = { 2,5,4,1,0,3};

	ft_sort_int_tab(tab,6);

	for (int i = 0; i < 6 ; i++)
	{
	printf("%i" , tab[i]);
	}
	printf("\n");
}
