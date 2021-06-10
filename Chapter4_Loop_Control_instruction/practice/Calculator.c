#include<stdio.h>

int main()
{
    int num, num2 = 1;
    int result;
    printf("Enter the no. you want to calculate the table \n");
    printf("Of the first 10 multiplcation\n");
    scanf("%d", &num);
    while (num2 <= 10)
    {
        result = num*num2;
        printf("The table of %d is %d\n", num, result);
        num2 ++;
    }
    
    return 0;
}