#include <stdio.h>

void ft_swap(int *a , int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
 int a;
 int b;

 a = 50;
 b = 30;
 printf("Before call the function: a = %d and b = %d \n" , a ,b);
 ft_swap(&a,&b);
 printf("After call the function: a = %d and b = %d " , a, b);
}