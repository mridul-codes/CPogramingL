// #include<stdio.h>

// int main()
// {
//     int natural_no = 4;
//     do
//     {
//         if (natural_no <=4)
//         {
//             printf("%d\n", natural_no);
//         }
//         natural_no--;
        
//     } while (natural_no> 0);
    
//     return 0;
// }
#include<stdio.h>

int main()
{
    int intial = 0;
    int n;
    printf("Enter the value till which we need to print Natural No. \n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", intial+1);
        intial++;
    } while (intial<n);
    
    return 0;
}

//#include<stdio.h>

// int main()
// {
//     int natural = 0, input;
//     printf("Here we will print n natural no.\n");
//     scanf("%d", &input);
//     do
//     {
//         printf("The natural no. are %d\n", ++natural);

//     } while (natural<input);
    
//     return 0;
// }