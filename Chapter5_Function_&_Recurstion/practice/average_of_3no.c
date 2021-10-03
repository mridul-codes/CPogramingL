// write a pogram using function to find the average of three input numbers?
#include <stdio.h>
float avg(int a, int b, int c);

int main()
{
    int num, num1, num2;
    printf("Please enter three numbers\t");
    printf("\nEnter the first no. \t");
    scanf("%d", &num);
    printf("\nEnter the second no. \t");
    scanf("%d", &num1);
    printf("\nEnter the third no. \t");
    scanf("%d", &num2);
    printf("\n\nThe average of the entered three numbers is %d\n\n", avg(num, num1, num2));
    return 0;
}
float avg(int a, int b, int c)
{
    float x;
    x = (float)(a + b + c) / 3;
    return x;
}