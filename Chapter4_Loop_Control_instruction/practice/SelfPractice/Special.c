//To check if the entered no. and its serial natural no. are divisible by 2 or no.
#include<stdio.h>

int main(){
    int input;
    int divs = 2;

    printf("\nPlease enterd a no. to check divisibility test with 2 and it serial fowllowing no. \n");
    scanf("%d", &input);
    for (input ; input>=1; input--)
    {
        if (input%divs==0)
        {
            printf("the no. %d is divisible by 2\n", input);
        }
        else
        {
            printf("The no. %d is not divisible by 2\n", input);
        }
        
    }
    
    return 0;
}