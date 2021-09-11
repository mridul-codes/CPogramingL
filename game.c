#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num, input, constant = 1;
    srand(time(0));
    num = rand()%10 + 0;


    printf("\n\n We Will Be playing a game.\n\n");
    do
    {
        scanf("%d", &input);
        if (input>num)
        {
            printf("Enter a smaller number..\n");
        }
        
        else if (input<num)
        {
            printf("Enter a larger number..\n");
        }
        else 
        {
            printf("Congrats you guessed it correctly\n");
            printf("The no of attems it took to guess is %d..\n", constant);
        }
        constant++;

        
    } while (input != num);
    
    return 0;
}