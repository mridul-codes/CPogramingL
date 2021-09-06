//write a pogram to print 1 to 4 if the user input is is 4
// #include<stdio.h>

// int main(){
//     int a = 4;
//     printf("The first natural no. are...\n");
//     do
//     {
//         if (a>=0){
//             printf("%d\n",a);}
//             a--;

//     } while (a>=1);
    
//     return 0;
// }


//write a pogram to print till first n no. if the input is n
#include<stdio.h>

int main(){
    int input;
    int constant = 1;
    printf("\n\nPlease Enter A natural no. \n\n");
    scanf("%d", &input);

    do
    {
            printf("The natural no. are %d\n", constant);
        constant++;
    } while (constant<=input);
    
    return 0;
}