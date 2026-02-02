#include<stdio.h>
int main(){
    int marks[10],i,n,sum;
    printf("enter the marks");
    for(i=0;i<=9;i++){
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    printf("%d",sum);

    return 0;

    }  
