#include<stdio.h>
int top =-1;
int size;
int main(){
    printf("\nEnter the size of the stack: ");
    scanf("%d", &size);
    int arr[size], choice;
    printf("*****STACK*****");
    printf("\n1 PUSH\n2 POP\n3 DISPLAY\n4 SIZE INCREASE\n0 EXIT");
    while (1)
    {
        printf("\nENTER YOUR OPTION: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (top>=size-1)
            {
                printf("\nOverflow!!");
            }
            else{
                top++;
                printf("\nENTER YOUR ELEMENT: ");
                scanf("%d", &arr[top]);
                printf("\nInsertion Successfully");
            }
            break;

        case 2:
            if(top==-1){
                printf("\nUNDERFLOW!!");
            }
            else{
                top--;
                printf("\nELEMENT DELETED");
            }
            break;

        case 3:
            if (top==-1)
            {
                printf("\nEMPTY STACK");
            }
            else{
                printf("\nSTACK ELEMENTS: ");
                for (int i = 0; i <= top; i++)
                {
                    printf(" %d", arr[i]);   
                }   
            }
            break;
        case 4:
        printf("\nENTER THE NEW SIZE OF STACK: ");
        scanf("%d", &size);
        arr[size];
        break;

        case 0:
        printf("\nEXITING THE STACK....");
        return 0;

        default:    
        printf("Do you want to view the menu 1/0 ");
        scanf("%d", &choice);
        if (choice==1)
        {
            printf("\n1 PUSH\n2 POP\n3 DISPLAY\n4 SIZE INCREASE\n0 EXIT");
        }
        
            break;
        }
    }
    
}