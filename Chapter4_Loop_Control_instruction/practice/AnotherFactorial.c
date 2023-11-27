#include<stdio.h>

int main()
{
    int number, a = 1, newNum;
    printf("Enter a number to gets its factorial: ");
    scanf("%d", &number);
    newNum = number;
    for (a ; a < newNum && newNum != 0; a++)
    {
        number*=a;

    }
    printf("\nThe factorial is : %d\n\n", number);
     
    return 0;
}