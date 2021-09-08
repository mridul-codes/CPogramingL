//Print out from the mentioned prime no. to lowest i.e 2
//Along with that print the power to itself
#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    double constant;
    double constant2;
    printf("Enter a Prime No.... \t");
    scanf("%d", &input);
    constant = input;
    constant2 = input;
    do
    {

        if ((input == 2) || (input == 3) || (input == 5) || (input == 7) || ((input % input == 0) && (input % 2 != 0) && (input % 3 != 0) && (input % 5 != 0) && (input % 7 != 0)))

        {
            printf("The no. %d is a prime number", input);
            printf("\nAnd the power of that no. to itself\t%lf\n", pow(constant, constant2));
        }
        else
        {
            printf("\nThe no. %d is not a prime number\n\n", input);
        }
        --input;
        constant = input;
        constant2 = input;

    } while (input >= 1);

    return 0;
}