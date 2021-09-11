//Wrirte a pogram to greet good morning, good afternoon, and good night based on you time you enterd
#include<stdio.h>
void gm();
void ga();
void ge();
void gn();
int main(){
    int time,merididian; 
    printf("\nThe entered time should be like 1230\t for 12.30");
    printf("\nAnd for Am enter 0\tFor pm enter 1\n");
    printf("Please enter a time\n");
    scanf("%d", &time);
    printf("Please enter Am or PM\t");
    scanf("%d", &merididian);
    if ((time>=0000||time<=1200)&&merididian==0)
    {
        gm();
    }
    else if ((time>1200||time<=0500)&&merididian==1)
    {
        ga();
    }
    else if ((time>0500||time<=800)&&merididian==1)
    {
        ge();
    }
     else// if ((time>800||time<1159)&&merididian==1)
    {
        gn();
    }
    
    return 0;

}
void gm(){
    printf("\nGood Moring\n");
}
void ga(){
    printf("\nGood afternoon\n");
}
void ge(){
    printf("\nGood evening\n");
}
void gn(){
    printf("\nGood Night\n");
}




// This can't be done in normal ways. Its a problem of data struture and alogorithim. It follows the wave kind of function
// so kind of problamtic to do in normal way