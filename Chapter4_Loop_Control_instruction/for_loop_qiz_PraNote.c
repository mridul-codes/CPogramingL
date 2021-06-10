// print n natural numbers using for loop?
#include<stdio.h>

int main()
{
    int input;
    printf("Enter till what you want to the natural no. be printed\n");
    scanf("%d", &input);
    for (int natural = 1; natural <= input; natural++)
    {
        printf("The natural no. are %d\n", natural);
    }
    
    return 0;
}