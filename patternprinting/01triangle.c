#include<stdio.h>
int main(){
    int i,j,k,num;
    printf("enter the row");
    scanf("%d",&num);
    int a=0;
    for(i=1;i<=num;i++){
       if(i%2!=0) a=1;
       else  a=0;
       for(j=1;j<=i;j++){
         printf("%d",a);
         if(a==1) a=0;
         else  a=1;}
         printf("\n");}
    return 0;
}