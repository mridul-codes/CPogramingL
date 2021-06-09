#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can drive legally\n");
    }
    else
    {
        printf("You are not yet old enough to drive\n");
    }

    return 0;
}