//Write a code to print n natural no. in reverse order
#include<stdio.h>

int main(){
    int input;
    printf("Enter a Natural No....\t");
    scanf("%d", &input);

    for ( input ; input>=1; input--)
    {
        if (input>=1)
        {
            printf("The no. are %d\n", input);
        }
        
    }
    
    return 0;
}