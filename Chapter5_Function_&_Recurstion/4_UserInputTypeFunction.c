#include<stdio.h>
#include<math.h>

int sum();
double div();
int mult();
int subs();
int power();

int main(){
    
    printf("\nPlease Enter two number for sum\n");
    printf("Sum\n");
    sum();
    printf("Multiply\n");
    mult();
    printf("Division\n");
    div();
    printf("Substraction\n");
    subs();
    printf("Power\n");
    power();
    
    return 0;
}









int sum(){
    int a, b;
    int result;
    printf("Enter the First no.\n");
    scanf("%d", &a);
    printf("Enter the Second no.\n");
    scanf("%d", &b);
    result = a + b;
    printf("\nThere Sum is \t");
     printf("%d\n\n", result);
    return result;
}

int mult(){
    int a, b;
    int result;
    printf("Enter the First no.\n");
    scanf("%d", &a);
    printf("Enter the Second no.\n");
    scanf("%d", &b);
    printf("\nThere Multiplication is \t");
    result = a * b;
    printf("%d\n\n", result);
    return result;
}

double div(){                                       // Its not necessarly to change the function into double it just to show that it works fine 
    double a, b;                                // The input value has to be a double 
    double result;                              //It has to be double
    printf("Enter the First no.\n");
    scanf("%lf", &a);
    printf("Enter the Second no.\n");
    scanf("%lf", &b);
    result = a / b;
    printf("\nThere Duvision is \t");
     printf("%lf\n\n", result);
    return result;
}

int power(){
    double a, b;
    double result;
    printf("Enter the First no.\n");
    scanf("%lf", &a);
    printf("Enter the Second no.\n");
    scanf("%lf", &b);
    result = pow(a,b);
    printf("\nThere power is \t");
     printf("%lf\n\n", result);
    return result;
}

int subs(){
    int a, b;
    int result;
    printf("Enter the First no.\n");
    scanf("%d", &a);
    printf("Enter the Second no.\n");
    scanf("%d", &b);
    result = a - b;
    printf("\nThere Substraction is \t");
     printf("%d\n\n", result);
    return result;
}
