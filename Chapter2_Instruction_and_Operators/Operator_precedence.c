#include<stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d\n", 3*x - 8*y); // Note: The c pograming language doesnt support any BODMAS rule
    // it follows the the assosivity order
    // the priorty is given in the order of 
    //1st -->    * / %
    //2nd -->    + -
    //3rd -->    =
    // Normaly the tie breaks in /* left to right */ order like 4 * 2 / 6 here 4 will be mulitiplied first to 2 then divede by 6 
    // it won't follow the bodmas rule at here 
    // In certain case if you need to break the tie between two operators just use brackets
    printf("The value of 8*y / 3*x is %d\n", 8*y / 3*x); // Here it won't folow the Bodmas rule 
    return 0;
}