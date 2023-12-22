#include<stdio.h>
int front , rear, size;

void Enque(int arr[]){
    if (rear==size-1)
    {
        printf("\nOVERFLOW !!");
    }
    else{
        if (front==-1)
        {
            front = 0;
        }
        printf("\nENTER YOUR ELEMENT: ");
        scanf("%d", &arr[++rear]);   
    }
    
}

void Deque(int arr[]){
    if (front == -1 && rear == -1)
    {
        printf("\nUNDERFLOW !!");
    }
    else{
            front++;
            if(front==size-1){
                printf("\nRESTING THE QUEUE");
                front = rear = -1;
                return;
            }
            printf("\nDEQUED ELEMENT");
    }   
}

int main(){
    front= rear = -1;
    printf("\nEnter the size of simple Queue: ");
    scanf("%d", &size);
    int arr[size];
    printf("****QUEUE*****");
    printf("\n1 ENQUE\n2 DEQUE\n3 DISPLAY \n4 EXIT ");
    int choice;
        
    while (1)
    {
    printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enque(arr);
            break;
        case 2:
            Deque(arr);
            break;
        case 3:
            if(rear == -1){
                printf("\nEMPTY QUEUE");
            }
            else{
                printf("QUEUE ELEMENTS: ");
                    for (int i = front; i <= rear; i++)
                    {
                       printf(" %d", arr[i]); 
                    }
                    
            }
            break;
       
        case 4:
            printf("\nExiting the queue.....");
            return 0;

        
        default:
        printf("Do you want to view the menu 1/0 ");
        scanf("%d", &choice);
        if (choice==1)
        {
           printf("\n1 ENQUE\n2 DEQUE\n3 DISPLAY \n4 EXIT ");
        }
            break;
        }
    }
    
}