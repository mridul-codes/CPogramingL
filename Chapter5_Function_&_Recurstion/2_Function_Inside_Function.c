#include<stdio.h>
void gm();
void ga();
void ge();
void gn();
char main(){
    
    printf("\nCalling All the function\n");
    gm();
  
    return 'a';
}
void gm(){
    printf("Good Moring\n");
    ga();
}
void ga(){
    printf("Good afternoon\n");
    ge();
}
void ge(){
    printf("Good Evening\n");
    gn();
    
}
void gn(){
    printf("Good Night\n");
}