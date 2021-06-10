//write a pogram to determine a no. is prime or not
#include<stdio.h>

int main()
{
    int num, i = 2, fixed_Value = 0;     // prime no. are those which are not divisible by any no. other than itself
    printf("Enter a no. check if its a prime or not\n");    
    scanf("%d", &num);
    while (i<num)
    {
        // if (num%i==0 && num!=2){                                   
        //     printf("The %d is a prime no.\n", num);              
        //     break;
        // }
        // else{
        //     printf("The %d is not a prime no.\n", num);
        //     break;
        // }        // will be using diffrent stratigies
        if (num%i==0){
            fixed_Value = 1;
            break;
        }

    }
    if (fixed_Value==1 && num!=2)
    {
            printf("The %d is not a prime no.\n", num);
    }
    else{
        printf("The %d is a prime no.\n", num);
           
         }  
    
    
    return 0;
}