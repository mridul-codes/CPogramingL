#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *next;
    } *head;

void inBEG();
void inEND();
void inPOS();
void delFR();
void delRR();
void delPOS();
void SEARCH();
void display();

int main(){
    head = NULL;
    printf("\nPerforming Simple Linked List :\nPick Your Option from the menu for your Node: ");
    printf("\n1. Insert at the Begining");
    printf("\n2. Insert at the Ending");
    printf("\n3. Insert at a Postion");
    printf("\n4. Delete from the front");
    printf("\n5. Delete from the Rear");
    printf("\n6. Delete at a Postion");
    printf("\n7. Search An element in LIST");
    printf("\n8. \3DISPLAY LIST");
    printf("\n0. Eixt the linked list");
    int caseOp;
    while(1){
        printf("\nEnter your Option: ");
        scanf("\n%d", &caseOp);
        switch(caseOp){
            case 1:
            inBEG();
            break;



            case 2:
            inEND();
            break;



            case 3:
            inPOS();
            break;



            case 4:
            delFR();
            break;



            case 5:
            delRR();
            break;



            case 6:
            delPOS();
            break;



            case 7:
            SEARCH();
            break;



            case 8:
            display();
            break;


            
            case 0:
            printf("\nExiting the linked List.....");
            return 0;



            default:
            printf("\nSelect an Option from the list: ");
            printf("\n1. Insert at the Begining");
            printf("\n2. Insert at the Ending");
            printf("\n3. Insert at a Postion");
            printf("\n4. Delete from the front");
            printf("\n5. Delete from the Rear");
            printf("\n6. Delete at a Postion");
            printf("\n7. Search An element in LIST");
            printf("\n8. \3DISPLAY LIST");
            printf("\n0. Eixt the linked list");
            break;

        }
    }
return 0;

}

void inBEG(){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("\nEnter the data: ");
    scanf("%d", &(newNode->data));


    if(head==NULL)
        head=newNode;

    else{
        newNode->next=head;
        head = newNode;
    }
    printf("\nData Insertion Successfull !");
}

void inEND(){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next=NULL;
    printf("\nEnter the data: ");
    scanf("%d", &(newNode->data));
    if(head==NULL){
        head=newNode;
    }
    else{
        struct node *temp;
        temp =head;
        while(temp->next!=NULL){
                temp = temp->next;
        }
        temp->next=newNode;
        printf("\nData Insertion Successfull !");
    }
}



void display(){
    if(head==NULL)
        printf("\nEMPTY LIST.... ");
    else{
    struct node *temp =head;
    printf("\nElements in the Linked List: ");
    while(temp!=NULL){
        printf("  %d", temp->data);
        temp = temp->next;
    }
    free(temp);
    }
}


void inPOS(){
    int pos,count = 0;
    printf("\nThe list of elements: ");
    display();
    printf("\nEnter the postion you want to insert data: ");
    scanf("%d",&pos);
    
    struct node *temp = head;
    while(count!=pos-1){
        temp = temp->next;
        count++;
        if(temp->next==NULL)
        {      //Incase the pos is invalid and exceeds the number of linked list data 
            printf("\nInvalid Postion given\nData will be inserted at the end of the node");
            break;
        }
    }
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("\nEnter the data: ");
    scanf("%d", &newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    printf("\nData Insertion Successfull !");
}

void delFR(){
    if(head==NULL)
        printf("\nEmpty LIST");
    else{
        struct node *temp = head;
        head = head->next;

        temp->next = NULL;
        free(temp);
        printf("\nFirst Node Deletion Success !");
    }
}

void delRR(){
    if(head==NULL){
        printf("\nEmpty List!");
        return;
    }
    struct  node *temp =head->next;
    if(temp==NULL)
    {
        printf("\nSingle Node present");
        free(temp);
        head=NULL; //very Important that the head becomes NULL so when we print the using display() that uses head to keep track the data
        printf("\nNode Deletion Suuccess !");
        return;
    }
    struct  node *prevtemp =head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        prevtemp= prevtemp->next;
    }
    prevtemp->next = NULL;
    free(temp);
    printf("\nLast Node deletion Success !");    
}


void delPOS(){
    //1st Segment of the code (checking the list is already empty)
    if(head==NULL){
        printf("\nEmpty List!");
        return;
    }
    //2nd Segment of the code (Insertion of the postion)
    int pos, count = 0;
    printf("\nEnter the position you want to insert the data: ");
    scanf("%d", &pos);

    //3rd Segment of the code (making temp that pointing the next node of the head)&(making prevtemp pointing the head)
    struct node *prevtemp= head;
     struct node *temp= head->next;
    //3rd. 1 condition check if the list consit of single node 
    if(temp==NULL)
    {
        printf("\nSingle Node present");
        free(temp);
        head=NULL; //very Important that the head becomes NULL so when we print the using display() that uses head to keep track the data
        printf("\nNode Deletion Suuccess !");
        return;
    }
    //4th Segment of the code(deletion of the node between the prevtemp and temp)
    else{
        while(count!=pos-1){
            temp= temp->next;
            if(temp->next==NULL)        //4th .1 In case the temp meet the last node
            {
                printf("\nLast Second node will be deleted");
                break;
            }
            prevtemp= prevtemp->next;
            count++;
        }
        //5th Segment of the code (Joing of the previous node and next to the node to be deleted) and (Deleting the node)
        prevtemp->next=temp;
        free(temp);
        printf("\nNode Deletion Suuccess !");
    }
}

void SEARCH(){
     //1st Segment of the code (checking the list is already empty)
    if(head==NULL){
        printf("\nEmpty List!");
        return;
    }
    int search, count = -1; 
    struct node *temp = head;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &search);

    while(temp->next!=NULL){
        count++;
        if(temp->data==search)
        {
            printf("\nTarget element located at %d number of NODE", count);
            return;     //return condtion (work just like recursion, if the element loacted it will be returned)
        }
        temp= temp->next;   
    }
    printf("\nTarget element Not located in the list!");
}