//write a pogram to find whether a year entered by the
// user is a leap year or not. Take year as an input from the user
#include <stdio.h>

int main()
{
    int year, check_division4, check_division100, check_division400;
    printf("Enter the year you wanted to \ncheck if its leap year or not\n");
    scanf("%d", &year);
    check_division4 = year % 4;
    check_division100 = year % 100;
    check_division400 = year % 400;
    if (check_division4 == 0 || !(check_division100 == 0) && check_division400 ==0)     // here && has higher priorty then ||
    {
        printf("The %d year is a leap year\n", year);
    }
    else
    {
        printf("The %d is not leap year\n", year);
    }

    return 0;
}