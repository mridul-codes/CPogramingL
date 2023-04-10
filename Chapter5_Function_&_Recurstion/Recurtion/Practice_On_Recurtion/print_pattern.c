//Write a pogram using function to print the following pattern (first n lines)
// *
// ***
// *****
//=====> As you can see it follows the odd no. pattern. So using funciton in odd pattern
#include<stdio.h>
void pattern(int a);
int main(){
    int num;
    printf("Enter the number of line \n");
    scanf("%d", &num);
    pattern(num);
    return 0;
}

void pattern(int a){
    if (a == 1){
        printf("*\n");
        return ;
    }
    pattern(a-1);
    for (int i = 0; i < (2*a -1); i++)
    {
        printf("*");
    }
    printf("\n");
    return;
}