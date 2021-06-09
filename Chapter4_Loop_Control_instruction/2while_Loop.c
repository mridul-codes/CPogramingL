#include<stdio.h>

int main()
{
    int a = 0;
    int b;
    printf("By using the loop pogram we printing out till 50\n");
    while (a<=50)
    {
        printf("The value is %d\n", a);
        a++;
    }
    printf("Let's try hard input method\n");
    scanf("%d", &b);
    while (b<=10)
    {
        printf("Printing out till we get addition result as 10 by adding 1 to intial is %d\n", b);
        b++;
    }
    
    return 0;
}
// The block keeps executing as long as the condition is true