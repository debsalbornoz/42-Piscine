#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int main(void)
{
int a;
int b;

a = 10;
b = 5;
 printf("Before call the function: a = %d and b = %d \n", a, b);
 ft_ultimate_div_mod(&a, &b);
 printf("After call the function: a = %d and b = %d \n" , a,b);
}
