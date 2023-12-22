#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int size;
void bubbleShort(int arr[]){
    int flag = 0;
    for(int i =0; i<size-1; i++ ){
        flag = 0;
        for(int j = 0;j<size - 1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if (flag == 0 )
            break;
    }
}
void insertSHORT(int arr[]){
    int temp, j;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j  = i-1;
        while (temp<arr[j]&&j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= temp;
        
    }
    
}



void input(int arr[]){
    for(int i= 0;i<size;i++)
        scanf("%d", &arr[i]);
}

void display(int arr[]){
    for (int  i = 0; i < size; i++)
        printf(" %d", arr[i]);
}


int main(){
    printf("\nEnter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the ELEMENTS of array: ");
    input(arr);
    printf("\n\nELEMENTS IN THE ARRAY: ");
    display(arr);

    printf("\nTHE SHORTED ARRAY IS : ");
    insertSHORT(arr);
    display(arr);

    return 0;
}
 