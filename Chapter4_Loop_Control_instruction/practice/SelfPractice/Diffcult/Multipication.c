//Print a multiplication table 

#include<stdio.h>

int main(){
    int num1,num2=1;
    printf("\n\nEnter the no. you Want to check The multiplaction table\n\n");
    scanf("%d", &num1);

    for (num2 = 1; num2 <= 10; num2++)
    {
        printf("\n%d\tX\t%d\t=\t%d\n", num1, num2, num1*num2);
    }
    

    return 0;
}