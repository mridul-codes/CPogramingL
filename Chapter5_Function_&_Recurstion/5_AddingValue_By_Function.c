//Adding the user function value to a variable: (using Hard input)
#include<stdio.h>
#include<math.h>

int sum(int a, int b);
double power(double a, double b);

int main(){
    double a,d;                                                                // the int a here and in line int a in 20 are not related 
    a = sum(8,6);        //8,6 are called arguments     :::::::            //they are totaly diffrent as they are in two diffrent functions
    d = power(4,6);
    printf("\nThe sum of 8 + 6 is %lf \nThe power 4 to 6 is  %lf\n", a, d);         //==> make sure to use double even in variable a as we can't
                                                                                    // take two different data types i.e here int and double respectively

    return 0;
}



int sum(int a, int b){                              // here a nd b are called parameters
    
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

   

   //parameters :  inside the function bracket will assined its value(can be any variables)
   //arguments :   this will be the real values directly put in the function, so they are actual value
   //parameters here are the place holders in case of in this codding a & b are the parameters, (place to put the variables) 
   //On the other hand here in arguments --> called sum of 8 and 3 & we get 11, in this case there are two arguments here such are 8 and 3


