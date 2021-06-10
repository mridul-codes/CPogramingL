// write a pogram to find grade of a student given his mark based on bellow:
#include<stdio.h>

int main()
{
    int mark;
    printf("Enter the mark you obtained\n");
    scanf("%d", &mark);
    if ((mark>=60) && (mark<70))
    {
        printf("You have obtained D grade\n");
    }
    else if ((mark>=70) && (mark<80))
    {
        printf("You have obtained C grade\n");
    }
    else if ((mark>=80) && (mark<90))
    {
        printf("You have obtained B grade great\n");
    }
    else if ((mark>=90) && (mark<=100))
    {
        printf("Exellent Job you got A grade\n");
    }
    else if (mark<60)
    {
        printf("Very poor marks Obtaied D grade\n");
    }

    
    return 0;
}