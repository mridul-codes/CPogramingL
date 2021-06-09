//Write a pogram to calculte the sum of the numbers
// occuring in the multiclation table
#include <stdio.h>

int main()
{
    int num1,i, num2, result;
    printf("Enter the no. you wanted to check multiplication table\n");
    scanf("%d", &num1);
    printf("Enter the number till where you want the multiplication table\n");
    scanf("%d", &num2);
    for (int i = 1; i <= num2; i++)
    {
     result = num1 * i;
    
    }
    for ( i = 0; i < num2; i++)
    {
        result+=i;
    }
    printf("%d\n", result);

    return 0;
}
