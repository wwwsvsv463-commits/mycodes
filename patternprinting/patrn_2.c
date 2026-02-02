#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("enter the row");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
       for(j=i;j<=num-1;j++){
         printf(" ");}
           for(k=1;k<=i;k++){ 
              printf("*");}
       printf("\n");}
    return 0;
}