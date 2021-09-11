//Adding the user function value to a variable: (using Hard input)
#include<stdio.h>
#include<math.h>

int sum(int a, int b);
double power(double a, double b);

int main(){
    int a,d;
    a = sum(8,6);
    d = power(4,6);
    printf("\nThe sum of 8 + 6 is %d \nThe power is %lf\n", a, d);

    return 0;
}




int sum(int a, int b){
    
    int result;
    result = a + b;
    // printf("\nThere Sum is \t");             ====>      Not required to write print function here
    //  printf("%d\n\n", result);
    return result;
}

double power(double a, double b){
    double result;
    
    result = pow(a,b);
    // printf("\nThere power is \t");               ====>      Not required to write print function here
    //  printf("%lf\n\n", result);
    return result;
}

   