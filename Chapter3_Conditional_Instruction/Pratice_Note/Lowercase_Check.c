//Check either the input letter is lower case
// or not?
#include<stdio.h>
// by using ascii table we can say that a-z character lies between 97-122
int main()      // this is ASCII values
{
    char ch;
    printf("Enter your character\n");
    scanf("%c", &ch);
    if (ch<=122 && ch >=97)
    {
        printf("The enterd charater is lower case\n");
    }
    else if (ch<=95 && ch>=65)
    {
        printf("The entered charater is Upper case\n");
    }
    
    else
    {
        printf("invalid charater entered\n");
    }
    
    return 0;
}