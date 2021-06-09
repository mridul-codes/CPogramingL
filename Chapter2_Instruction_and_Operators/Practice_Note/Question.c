#include<stdio.h>

int main()
{
    // Which of the following is invalid in C?
    // i> int a; b = a;         This is invalid because here b is not consider anytype of varible eg. the 
                                // the correct from will be int a; int b = a;
    // ii> int v = 3 ^ 3;       This is corret as it is bitwise zor function note that its not a power
    // iii> char dt = '21 Dec 2020'     This is invalid in character operation it should only a single letter 
    

    // What data type will 3.0/8 - 2 return? 
    //ans. As her one no. is decimal so it will have data type as double
    float d = (3.0/8-2);
    printf("%f\n", d);

    // Write a pogram to determine wheter a no. is divisible by 97 or not?
    int divided_by_97;
    printf("Enter a integer you want check its divisibility with 97 \n");
    scanf("%d", &divided_by_97);
    
    printf("Divisibitly test of the no. you entered is: %d\n", divided_by_97%97);

    //Explain step by step evaluation of 3 * x / y - z + k 
    //where x = 2, y = 3, z = 3, k = 1?
    //ans. As c pograming does not follow the BODMAS rule it follows the associative priorty order
    //      Hence here 3 * x will be done first and then result / y  then next to it result - z
    // and then result is + to k hence we get 0 here bellow the practical ans is given.
    int x, y, z, k;
    x = 2;
    y = 3;
    z = 3;
    k = 1;

    int result = 3 * x / y - z + k;
    printf("The value of 3 * x / y - z + k is %d\n", result);

    // 3.01 + 1 will be ?
    // i> Integer
    // ii> Floating point number 
    // iii> Character
    // Its a floating point number with double data type
    return 0;
}