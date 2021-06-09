#include<stdio.h>

int main()
{
    int a = 0;
    printf("Printing out till 10 number using do while loop\n");
    do
    {
        printf("The loop numbers are %d\n", a);
        a++;
    } while (a <=10);
    //therefore do while loop always run atleast once the code as it check the codtion after that here 11th line
    //used to determine a menu like yes or no in a game consider or anything
    // hence used to desgein the menu.
    // do - while loop = while loop which executes at least once
    return 0;
}