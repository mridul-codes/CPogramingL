#include<stdio.h>
int area();
int main(){
    int b;
    printf("Please enter a side of square\n");
    b = area();
    printf("\nThe area of the square  is %d\n", b);
    return 0;
}
int area(){
    int a,result;
    scanf("%d", &a);
    result = a * a;
    return result;


}