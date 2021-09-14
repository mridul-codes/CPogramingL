#include<stdio.h>
void gm();
void ga();
void ge();
void gn();

int main(){  
    printf("Calling the first function\n");
    gm();
    printf("Calling the second function\n");
    ga();
    printf("Calling the third function\n");
    ge();
    printf("Calling the fourth function\n");
    gn();

    return 0;
}

void gm(){
    printf("Good moring\n");
}
void ga(){
    printf("Good afternoon\n");
}
void ge(){
    printf("Good evening\n");
}
void gn(){
    printf("Good night\n");
}