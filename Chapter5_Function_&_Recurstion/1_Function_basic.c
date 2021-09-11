#include <stdio.h>
void display();     // This is function prototype

int main()
{
    printf("\nWe will check the function control here\n\n");
    display();         // This is function call
    printf("\nPogram ended here\n");
    return 0;
}

//This is function defination
void display()
{
    printf("Hi I am the call function\n");      //It always has to be writeen at the end
}