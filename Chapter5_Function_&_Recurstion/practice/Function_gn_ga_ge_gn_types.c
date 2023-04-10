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
    if (merididian==0&&(time<1200&&time>=0))
    {
        gm();
    }
    else if (merididian==1&&(time>=1200||time<=1159))
    {
        if (time>=0&&time<=530)
        {
            ga();
        }
        else if (time>530&&time<=800)
        {
            ge();           
        }
        else if (time>800&&time<=1159)
        {
            gn();
        }
      
    }
  
    
    return 0;

}
void gm(){
    printf("\nGood Morning\n");
}
void ga(){
    printf("\nGood Afternoon\n");
}
void ge(){
    printf("\nGood Evening\n");
}
void gn(){
    printf("\nGood Night\n");
}
