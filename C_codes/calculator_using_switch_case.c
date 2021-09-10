
#include <stdio.h>
#include<math.h>

int main()
{
    int num, num1, result;
    char oprator;

    printf("Enter the oprator\n");
    scanf("%c", &oprator);
    printf("Enter the first no.\n");
    scanf("%d", &num);
    printf("Enter the second no.\n");
    scanf("%d", &num1);
   
    switch (oprator)
    {
    case '+':
    result = num + num1;
        printf("%d + %d = %d\n", num, num1, result);
        break;
    case '-':
    result = num - num1;
        printf("%d - %d = %d\n", num, num1, result);
        break;
    case '*':
    result = num * num1;
        printf("%d * %d = %d\n", num, num1, result);
        break;
    case '/':
    result = num / num1;
        printf("%d / %d = %d\n", num, num1, result);
        break;
    case '^':
    result = pow(num,num1);
        printf("%d^%d = %d\n", num, num1, result);
        break;
    
    default:
        printf("Something went wrong :') Saddly\n");
        break;
    }
    return 0;
}