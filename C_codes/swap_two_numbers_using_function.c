//Program to swap two numbers using function
#include <stdio.h>

void swap(int, int);

int main()
{
    int a,b;
    printf("enter values");
    scanf("%d%d", &a,&b);
    printf("\n berfore swapping: a=%d and b=%d",a,b);
    swap(a,b);
    return 0;
}
void swap(int x, int y)
{
    int tem;
    tem = x;
    x = y;
    y = tem;
    printf("\nAfter Swapping:a=%d and b=%d", x, y);
}