#include<stdio.h>

int main()
{
    int i;
    int *j = &i;            //The command *j is for pointer and it will store the pointer of i    or     you can say it will store the address of i
    printf("\nPlease enter a value of i \t");
    scanf("%d", &i);
    printf("\n\nThe value of i without pointer is %d\n", i);
    printf("\n\nThe value of i with pointer is %d\n", *j);
    printf("\nThis will print the address of i is %u", j);
    printf("\nThis will print the address of i is %u", &i);
    printf("\n************This will print the address of j is %u*************", &j);
    printf("\n\n************This will print the value of j is %u*************", *(&j));
    return 0;
}