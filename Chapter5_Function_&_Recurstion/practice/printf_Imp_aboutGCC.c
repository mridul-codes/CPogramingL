#include<stdio.h>

int main(){
    int a = 6;
    printf("The value of a is %d %d %d \n", a, ++a, a++);       // here its an argument i.e a which wil print from right to left
    return 0;                                               // This is due to commplier behavior takes the arguments from right to left
}
// first is 8
// second is 8 
// third is 6