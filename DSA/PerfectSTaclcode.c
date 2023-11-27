#include<stdio.h>
int arr[100];
int top = -1, n;

int main(){
    int caseOp;
    printf("\nEnter the size of Array: ");
    scanf("%d", &n);    //the limted size is 100
    printf("\nSelect your Opperation: ");
    printf("\n1 Push\n2 Pop\n3 Display\n4 Increase size\n0 Exit");
    while(1){
        printf("\nEnter your Opperation: ");
        scanf("%d",&caseOp);
        switch(caseOp){
            
            
            case 1:
            if(top>=n-1)
                printf("\nStack Overflow\nPop or Increase the size of the array\n");
            else
            {
                top++;
                printf("\nEnter your element.. ");
                scanf("%d", &arr[top]);
                printf("\nElement PUSHED successfull!\n");
            }
            break;


            case 2:
            if(top==-1)
                printf("\nStack Underflow\n");
            else
            {
                top--;
                printf("\nElement Deletion succes\n");
            }
            break;

            
            case 3:
                if(top==-1){
                    printf("\nEMPTY STACK\n");
                }
                else{
                    printf("\nElements in the stack:");
                    for(int i=0;i<=top;i++)
                        printf("\n\3 %d", arr[i]);
                }
            break;
            
            
            case 4:
                do{
                    if(n>100)
                    printf("\nInvalid Size!");
                printf("\nEnter the new size of the stack: ");
                scanf("%d", &n);
                }while(n>100);
            break;
                

            case 0:
                printf("\nExiting the stack....\n");
                return 0;
                }
        }
    
    return 0;
}