#include<stdio.h>
int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a b before change is %d %d\n", a , b);
    printf("\tThe sum of the enterd two nuber is %d\n", sum(a, b));
    printf("The value of a b after change is %d %d\n", a , b);          //As you can see call function can never change the value in the main function
    printf("\n\n\n***************Therfore without the help of pointer you can not change the value of variable in manin function**************");
    printf("\n\t\t\t\t\t\t\ti.e by using Funcrtion\n");
    return 0;                   // therefore we use pointers to change value in main function using pointers
}

int sum(int a, int b){
    int c = a + b;
    a =583;
    b =43507;
    return c;
}