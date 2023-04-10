// Write a recursion to find the sum of first n natural no.?
#include <stdio.h>
int sum(int x);
//==============================================================================//
int main()
{
    int value;
    printf("Enter the n term to find the sum of Natural no.\t");
    scanf("%d", &value);
    printf("\nThe Required summision is %d\n", sum(value));
    return 0;
}
//==============================================================================//
int sum(int x)
{
    if (x == 0)
    {
        x = 0;
        return x;
    }
//..................................................................//    
    else
    {
        int r;
        r = x;
        while (r != 0)
        {
            x = r + (x - 1);
            --r;
        }
        return x;
//..................................................................// 
    }
}