//Another eg. of 5_1Notes.txt file (Most important points::: 2 eg.)
#include<stdio.h>
void change(int a);

int main(){
    int num;
    printf("Please enter a no.\n");
    scanf("%d", &num);
    printf("\nThe value of the enterd no. before change is %d\n", num);
    
    change(num);
    
    printf("\nThe value of the enterd no. after change is %d\n", num);
    // As you can see your entered value does not changes
    return 0;
}

void change (int a){
    a = 1234567;
}