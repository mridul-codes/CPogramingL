#include <stdio.h>

int main()
{
    int phy, math, chem, pp, cp;
    float total;
    printf("Marks secured in physics theory:\t\n");
    scanf("%d", &phy);
    printf("Marks secured in mathematics:\t\n");
    scanf("%d", &math);
    printf("Marks secured in chemistry theory:\t\n");
    scanf("%d", &chem);
    printf("Marks secured in physics practical:\t\n");
    scanf("%d", &pp);
    printf("Marks secured in chemistry practical:\t\n");
    scanf("%d", &cp);

    if (phy <= 70 && chem <= 70 && math <= 100 && pp <= 30 && cp <= 30)
    {
        phy = phy + pp;                             //<----- from here value of phy is changed after addition of pp with it.
        chem = chem + cp;                           //<------value of chem is changed after addition of cp with it.
        total = (phy + math + chem) / 3;

        if (phy < 30 || chem < 30 || math < 30 || (total < 35))          // phy and chem is the total score and not the initial input
        {
            printf("\n\nYou did not pass");
        }
        else
        {
            printf("\n\nYou have passed.\n");
            printf("The total score is %.2f percentage", total);
        }
    }


    else

    {
        printf("Thats an invalid input.");
    }

    return 0;
}