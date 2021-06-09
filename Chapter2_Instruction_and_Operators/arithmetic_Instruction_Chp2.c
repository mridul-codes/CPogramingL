#include<stdio.h>
#include<math.h>

int main()
{
    int a = 5;
    int b = 2;
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a / b is: %d\n", a / b);
    printf("The value of a - b is: %d\n", a - b);


    printf("The value of (a - b) * 2 is: %d\n", (a - b) * 2 );
    // Here all the sign are used are assumed to be operators hence 
    // this are arithmetic operators
    printf("The remainder when 5/2 : %d\n", 5%2 ); 
   // Here we usesd %d as in the above line because a reaminder can never be a decimal no. 
    //very imp note we can see that whatever the sign of the first no. here its 5 then it will follow that sign in the remainder
    // eg. given bellow
    printf("The remainder of -a/b : %d\n", -a % b);
    printf("The remainder of a/-b : %d\n", a % -b);
    // Here you can guess that the sign of a i.e at first postion matters not the second one

    // to calculate the exponents of any no. there is no operator in c hence we use the pow() function
    // note that 4^2 is also correct but its a bitwise operator
    // eg, given bellow
    printf("The bitwise operation of 2 to 5 is :%d\n", 2^5); //This will give bitwise operation not the exponets 
    printf("The value of 2 to the power 5 is :%f\n", pow(2, 5)); 
    //Imp note in case of pow() function always use real function i.e %f that is due to is double charater
    //Elese it wll not return to 0
    return 0;
}