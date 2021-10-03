// Example of recurtion by factorical
#include<stdio.h>
int factorial (int x);
int main(){
    int a;
    printf("Enter a value to find the factorial\n");
    scanf("%d", &a);
    printf("\nThe factorial of %d is %d\n", a, factorial(a));
    return 0;
}   

int factorial (int x){
    if (x==1||x==0)
    {
        // printf("The factorial is 1");
        return 1;
    }
    else
    {
        return x * factorial (x-1);     // here this the recursion i.e function inside the function
    }
    
}

// how does it work?
// factorial  (5)
// 5   x    factorial(4)
// 5   x    4              x       factorial(3)
// 5   x    4              x          3                factorial(2)
// 5   x    4              x          3        x            2             x        factorial(1)