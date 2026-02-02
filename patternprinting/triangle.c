#include<stdio.h>
int main(){
    int i,j,k,l,num;
    printf("enter the row");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
       for(j=i;j<=num-1;j++){
         printf(" ");}
           for(k=1;k<=i;k++){ 
              printf("*");}
                for(l=1;l<i;l++){
                  printf("*");}
       printf("\n");}
  return 0;
}