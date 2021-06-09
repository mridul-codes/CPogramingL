#include<stdio.h>

int main()
{
   int skip = 5;
   int i = 0;
   while (i<10)
   {
       i++;
       if (i != 5){
           continue;       // as you can see we did not use print statement so it wont
           // print the condition here 
       }
       else 
       {
           printf("%d\n", i);      //Here we use print statement so it will print 
           //the i = 5 function here as we mentioned above that i != 5
       }
       
   }
    
    return 0;
}