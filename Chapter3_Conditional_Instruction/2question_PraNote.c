// what will be the output og the pogram? 
// int a = 10 
// if (a = 11){                         note here it is given a=11 not a==11 so
//     printf("I am 11");               its going to print the I am 11 satement
// }                                    as = is true for any non zero char and its quality check not eqaulity
// else {
//     printf("I am not 11");
// }


// write a pogram to find out whether a student is pass or fail, if it 
// requires total 40% and at least 33% in each subject to pass Assume 3 
// subject and take marks as an input from the user
#include<stdio.h>

int main()
{
    int phy, chem, math;
    float total;
    printf("Enter your marks in Physics\n");
    scanf("%d", &phy);
    printf("Enter your marks in Chemistry\n");
    scanf("%d", &chem);
    printf("Enter your marks in Mathematics\n");
    scanf("%d", &math);
    total = (phy + chem + math)/3;
     
    if ((total<40) || (phy<33) || (chem<33) || (math<33))
    {
        printf("Sorry you have failed and your percentage is %f\n", total);
    }
    else{
        printf("Congragulation on passing your percentage is %f\n", total);
    }
    return 0;
}


