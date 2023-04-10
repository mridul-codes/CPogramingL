//write a pogram using recursion to calculate the nth element of fibonacci series
#include <stdio.h>
int fib(int num);

int main()
{
    int term;
    printf("Enter the term you want to find in the Fibonacci sequence\t");
    scanf("%d", &term);
    printf("\n\nThe required element is %d\n", fib(term));
    return 0;
}

int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);         // here its recursion of the term thats why (num-1) + (num-2)
    }
}