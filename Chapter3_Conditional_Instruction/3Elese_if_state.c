#include<stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);
    if(num==1){
        printf("The no. you have enterd is 1\n");
    }
    else if(num==2){
        printf("The no. you have enterd is 2\n");
    }
    else if(num==3){
        printf("The no. you have enterd is 3\n");
    }
    else {
        printf("The no. you have eneterd is not 1,2 or 3 its %d\n", num);
    }
    return 0;
}