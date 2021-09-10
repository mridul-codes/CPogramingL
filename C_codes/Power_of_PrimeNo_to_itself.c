// Program to execute prime numbers then power it to itself.
#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    double temp1, temp2;
    printf("enter the number :\t");
    scanf("%d", &number);
    temp1=number;
    temp2=number;
   
    do
    {
         if ((number == 2) || (number == 3) || (number == 5) || (number == 7) || ((number % number == 0) && (number % 2 != 0) && (number % 3 != 0) && (number % 5 != 0) && (number % 7 != 0)))
        {
            printf("The numbered entered, %d is a prime number.\n", number);
            printf("The power of the prime number by itself is : %lf \n\n", pow(temp1, temp2));
        }
         number--;
         
         temp1=number;
         temp2=number; 
         // form here it will go back to line 14 . But from line 20 it is mentioned to decarement. 
         // value of number which will go down to temp1 and temp2 and there new value will be updated.
         //  printf("%lf     %lf\n", temp1, temp2);

    } while (number >= 1);
    return 0;
}