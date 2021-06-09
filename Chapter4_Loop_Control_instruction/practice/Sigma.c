//Write a pogram to find sum of n natural no. using do-while loop
#include<stdio.h>

int main()
{
    int natural = 0, i=0, n;
    printf("Enter the a natural no. to find sigma\n");
    scanf("%d", &n);
    do
    {
        natural+=i;
        i++;
    }  while (i<=n);
    
    printf("The value is %d\n", natural);
    return 0;
}