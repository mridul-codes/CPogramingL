#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, password =1681, constant = 1, constat2, input;
    srand(time(0));
    num = rand()%100 + 1;

    printf("\n\nPlease ENTER your password to proceed to the Game\t");
    scanf("%d", &constat2);
    if (constat2==password)
    {
        printf("\nLets Play A Game");
        printf("\nEnter a no. between 1 - 100 and check your luck\n");
        printf("How many attemps does it takes you to guess\n");
        
        do
        {
            scanf("%d", &input);
            if (input>num)
            {
                printf("Smaller no. Please\n");
            }
            else if (input<num)
            {
                printf("Larger no. Please\n");
            }
            else
            {
                printf("Congrats you gussses it correct\n");
                printf("The no. of attemps are %d..\n", constant);
            }
            constant++;
        } while (num!=input);
        
    }
    else
    {
        printf("\n\nYou have entered wrong credentials \n\n");
    }
    
    
    return 0;
}