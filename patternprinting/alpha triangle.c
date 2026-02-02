#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("enter the row");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
       for(j=i;j<num;j++){
         printf(" ");}
           for(j=1;j<=i;j++){ 
              printf("%c",(char)j+64);}
       printf("\n");}
    return 0;
}