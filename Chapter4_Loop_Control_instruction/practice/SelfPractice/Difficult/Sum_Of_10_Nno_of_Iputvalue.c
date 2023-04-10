//Summision of next 10 no. to the input value
#include <stdio.h>

int main()
{
    int input, parameter1, parameter2, constant;
    printf("Enter a no....\t");
    scanf("%d", &input);
    parameter1 = input;
    constant = input;
    parameter2 = 10 + input;

    while (constant <= parameter2)
    {

        ++input;
        constant++;
        // printf("%d\n", input);
        parameter1 = parameter1 + input;
        //    printf("%d\n", constant);
        if (constant < parameter2)
        {
            continue;
        }
        else if (constant >= parameter2)
        {
            break;
        }
    }

    printf("The value of Input %d \n", parameter1);

    return 0;
}