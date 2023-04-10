// write a function to calculate the force of attraction on a body of mass m exerted by earth
#include<stdio.h>
float force(float a);
int main(){
    printf("Please enter the value of mass of the object\t");
    float mass;
    scanf("%f", &mass);
    printf("\n\nThe required value of force is %.2f N\n\n", force(mass));       // Note here .1 decides how many decimal digit required after point
    return 0;
}
float force(float a){
    a = 9.8 * a;
    return a;
}