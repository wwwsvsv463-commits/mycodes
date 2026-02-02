#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("enter the row");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
       for(j=1;j<=i;j++){
         if(i%2==0)
            printf("%c",(char)64+j);
         else
             printf("%d",j);}
      
    printf("\n");}
    return 0;
}