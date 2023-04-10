#include<stdio.h>

int main()
{
    float c;
    float f = 9 / 5;
    printf("Enter the degree celsius you want to conver into fernheit\n");
    scanf("%f",&c);
    float a = c * f;
    float b = 32;
    printf("The required data is %f\n", a + b);
    return 0;
}