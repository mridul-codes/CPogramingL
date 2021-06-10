#include<stdio.h>

int main()
{
    float a = 3.14;
    float r;
    printf("Please Enter the radius of a circle\n");
    scanf("%f", &r);
    printf("The area of the circle is %f \n", r * r * a );
    return 0;
}