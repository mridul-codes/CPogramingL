#include<stdio.h>
    int size;
    int binSeach(int arr[], int search){
        int pos = -1;
        int front  = 0, last  = size-1, mid;
        while (front<=last)
        {
        mid =(front+last)/2;
            if(arr[mid]==search){
            pos = mid;
            break;
            }
            else if(arr[mid]>search)
                last = mid-1;
            else
                front = mid+1;
        }
        return pos;
    }
int main(){
    printf("\nENTER THE SIZE OF ARRAY: ");
    scanf("%d", &size);
    int arr[size], search;
    printf("\nEnter the elements in sorted manner: ");
    for (int  i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\nENTER THE YOUR SEARCH ELEMENT IN THE ARRAY: ");
    scanf("%d", &search);
    int check = binSeach(arr, search);
    if(check<0)
    printf("\nTAREGET ELEMENT NOT LOACTED");
    else{
            printf("\nTARGET ELEMENT LOCATED AT %d INDEX", check);
    }
    return 0;

}