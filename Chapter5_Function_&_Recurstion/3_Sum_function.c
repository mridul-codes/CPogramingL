// Hard input type of sum Function

#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum (int a, int b); //function prototype declaration



int main(){ 
    printf("\nWe will print out the value of the sum Function\n");
    sum(6,8);       //function call 
    return 0;
}




int sum(int a, int b){
    int result;
    result = a + b;
    printf("%d\n", result);
    return result ;             // here its returing the result value to sum funcition, not 0. Note that!
}




//====> From here its a small example to understand



// #include<stdio.h>
// #include<math.h>
// int main(){
//     double result;
//     result = pow(2,3);
//     printf("%lf",result);
//     return 0;
// }

// // double pow(double a, double b){
// //     double result;
// //     result = a ^ b;
// //     return result
// // }