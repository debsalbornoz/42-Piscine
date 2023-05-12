#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int num = 0;
    printf("Before call the function: %d\n", num);
    ft_ft(&num);
    printf("After call the function: %d\n", num);
    return 0;
}