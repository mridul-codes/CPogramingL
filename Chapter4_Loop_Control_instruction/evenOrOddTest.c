#include<stdio.h>

int main()
{
    int a =1;
    printf("We will print 1 to 100 even numbers \n");
    do
    {
        if (a%2==0)
        {
             printf( "a = %d\n",a);
        a++;
        }
        else{
            a++;
        }
        
    } while (a<=100);
    
    // if ()
    // {
       
    // }
    
    
    return 0;
}