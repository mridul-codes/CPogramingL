#include<stdio.h>

int main()
{
    int sum = 0,Number = 1, inputData;
    printf("Please Enter a number: ");
    scanf("%d", &inputData);
    for ( Number = 1; Number <= inputData; Number++)
    {
        sum+=Number;
    }
    printf("\n%d ", sum);
    
    return 0;
}