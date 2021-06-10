//write a pogram to print n natueal numbers in reverse order
#include<stdio.h>

int main()
{
    int natural, input;
    printf("Enter a number\n");
    scanf("%d", &input);
    for ( natural = 1; natural <= input ; input--) 
    {
        printf("The natutral no. are %d\n", input);
    }
    
    return 0;
}