#include<stdio.h>
int pos, sameEle =0;
int LINsearch(int arr[], int n, int search){
    pos = -1;
    for(int i = 0;i<n;i++){
            if(arr[i]==search) { 
                pos = i;
                sameEle++;
            }
    }
    return pos;
}

int main(){
    int size;
    printf("\nEnter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nENTER THE ELEMENTS IN THE ARRAY: ");
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }
    int search;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &search);
    int check = LINsearch(arr, size, search);
    if (check<0)
    {
        printf("\nElement not loacted");
    }
    else{
        printf("\n%d LOCATED AT %d INDEX", search, check);
    }
    return 0;
}