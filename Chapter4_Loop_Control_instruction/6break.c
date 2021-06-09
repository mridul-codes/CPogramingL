#include<stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
        if (i==6)       // writing the if condtion to break the loop
        {
            break;
        }
        
    } while (i<=10);
    
    
    return 0;
}