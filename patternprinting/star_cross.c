#include<stdio.h>
int main(){
    int i,j,k,row,col;
    printf("enter the row\n");
    scanf("%d",&row);
    

    for(i=1;i<=row;i++){
       for(j=1;j<=row;j++){
         if(j==i|| i+j==6)
            printf("*");
         
         else
            printf(" ");}
             
      
    printf("\n");}
    return 0;
}

