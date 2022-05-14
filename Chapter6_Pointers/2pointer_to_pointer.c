#include<stdio.h>

int main()
{
    int a = 2;
    int *f_pointB = &a;
    int **s_pointC = &f_pointB;
    printf("\nWe will print the adress of the first pointer f_point %u\n", &f_pointB);
    printf("\nWe will print the adress of the Second pointer s_point %u\n", &s_pointC);
    return 0;
}