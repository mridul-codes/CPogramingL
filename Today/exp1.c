#include<stdio.h>

void input(int arr[],int n){
    for(int i= 0;i<n;i++)
        scanf("%d", &arr[i]);
}

void display(int arr[], int n){
    for (int  i = 0; i < n; i++)
        printf(" %d", arr[i]);
}

int nSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++)
        sum = arr[i]+sum;

    return sum;
}

int main(){
    int size;
    printf("\nEnter the size of array: ");
    scanf("%d", &size);
    printf("\nEnter the elements of the array: ");
    int arr[size];
    input(arr, size);

    printf("\n\nYou have entered the following elements: ");
    display(arr, size);

    printf("\n\nSUM TILL %d TERMS : %d", size, nSum(arr, size));
    return 0;
}
