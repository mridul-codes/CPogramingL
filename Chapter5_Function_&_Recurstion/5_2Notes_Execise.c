#include <stdio.h>
int abcd(int b);

int main()
{
    int a;
    a = 2 + 3;
    printf("Here it will be a missnomer\n");
    printf("i.e 2 + 3 = 5 but the value through the line 11 will send a copy of abcd\n");
    printf("Current value of a %d\n", a);
    abcd(a); //===>here parameter of the call function is not related to int a in line 6
    //after adding the missnomer in a the actual will still remain same. As a proof given bellow a print

    printf("added missnomer value in a %d\n", a);       // i.e the actual value will remain same whatever given at the main function
    //      as its not related to directly to the abcd function. Unless using pointers by call function
    return 0;
}

int abcd(int b)
{
    b = 123;

    return b;
}







//->......................................................................................................................<-//


// #include <stdio.h>
// int abcd(int b);

// int main()
// {
//     int a;
//     a = 2 + 3;
//     printf("Here it will be a missnomer\n");
//     printf("i.e 2 + 3 = 5 but the value will send a copy of abcd\n");
//     printf("Current value of a %d\n", a);
//     a = abcd('b');   // with the help of type casting we can get rid of the missnomer

//     printf("removed the actual value and added abcd values in  a i.e %d\n and Without creating any missnomer\n", a);      
    
//     return 0;
// }

// int abcd(int b)
// {
//     b = 123;

//     return b;
// }