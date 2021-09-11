// Make a calculator to print the multiplication table in reverse order
#include<stdio.h>

int main()
{
    int num, mult_num = 10;
    int result;
    printf("Enter the number you want to multiplcation table\n");
    scanf("%d", &num);
    for ( ; mult_num > 0; mult_num--)
    {
    result = num * mult_num;
        printf("%d x %d = %d\n", num, mult_num, result );
    }
    
    return 0;
}