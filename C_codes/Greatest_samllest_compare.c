// To find the greatest and smalleat number among four numbers

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    printf("Enter 4 numbers:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    // To find the greatest number
    if (n1>n2 && n1>n3 && n1>n4)
    {
        printf("\n%d is the greatest number \n\n", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("\n%d is the greatest number \n\n", n2);
    }
    else if (n3 > n1 && n3 > n2 && n1 > n4)
    {
        printf("\n%d is the greatest number \n\n", n3);
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3)
    {
        printf("\n%d is the greatest number \n\n", n4);
    }
    else
    {
        printf("\nInputs must not be of the same value \n\n");
    }

    // To find the smallest number
    if (n1 < n2 && n1 < n3 && n1 < n4)
    {
        printf("%d is the smallest number \n\n", n1);
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4)
    {
        printf("%d is the smallest number \n\n", n2);
    }
    else if (n3 < n1 && n3 < n2 && n1 < n4)
    {
        printf("%d is the smallest number \n\n", n3);
    }
    else if (n4 < n1 && n4 < n2 && n4 < n3)
    {
        printf("%d is the smallest number \n\n", n4);
    }
    else
    {
        printf("\nInputs must not be of the same value \n\n");
    }

    return 0;
}