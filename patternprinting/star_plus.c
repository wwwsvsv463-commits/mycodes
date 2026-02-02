#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("enter the row");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
       for(j=1;j<=num;j++){
         if(j==num/2+1 || i==num/2+1)
            printf("*");
         else
             printf(" ");}
      
    printf("\n");}
    return 0;
}