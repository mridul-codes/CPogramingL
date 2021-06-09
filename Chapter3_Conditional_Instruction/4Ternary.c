#include<stdio.h>

int main()
{
    int a;
    printf("Enter a\n");;
    scanf("%d", &a);
    //one liner if or else statement
    (a>=10)?printf("The no. you have enter is greater or eqaul than 10\n"):printf("The no. you have entered is less than 10\n");
    //the terminal operator works as shortcut of the if and else statement
    // condition ? ecpression-if-true : expression-if-false
    // here ? and : are the ternary operators
    return 0;
}