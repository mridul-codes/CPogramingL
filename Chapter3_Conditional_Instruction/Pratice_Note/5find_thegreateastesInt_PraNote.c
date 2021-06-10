// Write a pogram to find greatest of four numbers
// entered by the user
#include<stdio.h>

int main()
{
    double num1, num2, num3, num4;
    printf("Enter your first number\n");
    scanf("%lf", &num1);
    printf("Enter your second number\n");
    scanf("%lf", &num2);
    printf("Enter your third number\n");
    scanf("%lf", &num3);
    printf("Enter your fourth number\n");
    scanf("%lf", &num4);


    if ((num1>num2)&&(num1>num3)&&(num1>num4)) 
    {
        printf("The first number is the greatest\n");
    }
    else if ((num2>num3)&&(num2>num1)&&(num2>num4))
    {
        printf("The second number is the greatest\n");
    }
    else if ((num3>num1)&&(num3>num2)&&(num3>num4))
    {
        printf("The third number is the greatest\n");
    }
    else if ((num4>num1)&&(num4>num2)&&(num4>num3))
    {
        printf("The forth number is the greatest\n");
    }
    
    
    
    
    
    
    return 0;
}
