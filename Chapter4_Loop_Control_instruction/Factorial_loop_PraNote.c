//write a program to calculate the factoral of a given n number using 
//a for loop
#include<stdio.h>

int main()
{
    double n, result = 1;
    printf("Enter the no. you want to find the factorial\n");
    scanf("%lf", &n);
    for (double i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("The factorial of %lf is:  %lf\n", n, result);
    
    return 0;
}


// write a pogram to calculate factorial using while loop
// #include<stdio.h>

// int main()
// {
//     int i = 1, n, result = 1;
//     printf("Enter the no. you wanted to check the factorial\n");
//     scanf("%d", &n);
//     while (i<=n)
//     {
//         result *= i;
//         i++;
//     }
//     printf("%d\n", result);
    
//     return 0;
// }