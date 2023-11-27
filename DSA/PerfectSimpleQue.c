#include<stdio.h>
int front=-1, rear=-1, arr[100], size= 1;
void sizeCheck(){
    do{
    if(size>100||size<=0){
        printf("\nEnter a valid Size\nMAX size is 100\nMIN is 1  ");
    }
    
    scanf("%d", &size);
    }while(size>100||size<=0);
    return;
}


void enque();
void deque();
void display();
void Isize();


int main(){
    printf("\nEnter the size of the Queue: ");
    sizeCheck();

    printf("\nChoose your Opperation: ");
    printf("\n1 Enque\n2 Deque\n3 Display\n4 Increase the size of the Queue\n0 Exit.. ");
    int caseOp;
    
    while(1)
    {
        printf("\nEnter your Opperation: ");
        scanf("%d", &caseOp);

        switch(caseOp)
        {
            case 1:
            enque();
            break;

            case 2:
            deque();
            break;

            case 3:
            display();
            break;

            case 4:
            Isize();
            break;

            case 0:
            printf("\nExiting Queue .... ");
            return 0;
        }
    }
    return 0;
}


void enque(){
    if(rear>=size-1)
        printf("\nOverflow!");
    else{
        if(front == -1 && rear ==-1)
            front = 0;
        rear++;
        printf("\nEnque your element: ");
        scanf("%d", &arr[rear]);
        printf("\nENQUE SUCCESS!!.. ");

    }
}

void deque(){
    if((front == -1 && rear ==-1)||(front>rear))
        printf("\nUnderflow!");
    else{
        front++;
        printf("\nDEQUE SUCCESS!!.. ");
        if(front > rear){
            printf("\nResting the Que....");
            front = rear =-1;
        
        }
    }
    
}


void display(){
    if(front==-1&&rear==-1)
        printf("\nEMPTY QUEUE!.. ");
    else{
        printf("\nElements in Queue: ");
        for(int i =front; i<=rear;i++){
            printf("  %d", arr[i]);
        }
    }
}

void Isize(){
    printf("\nEnter the new size of Queue: ");
    sizeCheck();
}