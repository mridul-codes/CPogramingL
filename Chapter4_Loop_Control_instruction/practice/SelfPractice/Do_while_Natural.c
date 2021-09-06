#include<stdio.h>

int main(){
    int a =0;
    printf("Lets print out the natutral no. usind do while from 10 - 20\n\n");
    do {
        if ((a>=10)&&(a<=20))
        {
            printf("%d\n", a);
        }
        ++a;

    }while(a<=20);
    return 0;
}