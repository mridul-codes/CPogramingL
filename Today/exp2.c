#include<stdio.h>
int size = 100;
int main(){
    int arr[100],n, choice, pos;

    printf("\nEnter the size of arr: ");
    scanf("%d", &n);

    printf("\nEnter the elements in array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf(" 1 INSERT\n 2 DELETE\n 3 INCREASE\n 4 DISPLAY\n 0 EIXT");
    while (1)
    {
        printf("\nPICK YOU CHOICE: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("ENTER THE POSTION YOU WANT TO INSERT: ");
            scanf("%d", &pos);
            if (pos>n)
            {
                printf("\nENTER A VALID POSITION");
            }
            else{
                    for(int i = n; i >=pos; i--){
                        arr[i+1] = arr[i];
                    }
                    n++;
                    printf("\nEnter the new element: ");
                    scanf("%d", &arr[pos]);
                    printf("\nINSERTION SUCCESS");
                }
            break;
        case 2:
             printf("ENTER THE POSTION YOU WANT TO DELETE: ");
            scanf("%d", &pos);
            if (pos>n||pos<0)
            {
                printf("\nENTER A VALID POSITION");
            }
            else{
                for(int i = pos;i<n;i++)
                    arr[i]= arr[i+1];
                printf("\nDELETION SUCESSFUL");
                n--;   
            }
            
            break;

        case 3: 
                printf("\nCURREENT SIZE %d\nEnter the new size: ", n);
                scanf("%d", &n);
                printf("SIZE INCREASED SUCCESSFULLY");
            break;;
        case 4:
            printf("ARRAY ELEMENTS: ");
            for (int i = 0; i < n; i++)
                printf(" %d", arr[i]);
            break;

        case 0:
            printf("\nEXITING THE CODE..... ");
            return 0;
        default:
            printf("\nENTER A VALID OPTION FROM THE MENU");
            printf("\nDO YOU WANT TO VIEW THE MENU 1/0? ");
            scanf("%d", &choice);
            if (choice ==1)
            {
                printf("1 INSERT\n 2 DELETE\n 3 INCREASE\n 4 DISPLAY\n 0 EIXT");
            }
            
            break;
        }
    }
    return 0;
    
}