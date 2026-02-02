#include<stdio.h>
int main(){
    int i,j,k,row,col;
    printf("enter the row\n");
    scanf("%d",&row);
    printf("enter the column");
    scanf("%d",&col);

    for(i=1;i<=row;i++){
       for(j=1;j<=col;j++){
         if(j==1 || j==col)
            printf("*");
         else if (i==1 || i==row )
            printf("*");

         else
            printf(" ");}
             
      
    printf("\n");}
    return 0;
}