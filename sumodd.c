#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i;i<=n;i=i+2){
       sum+=i;
    }
    printf("%d",sum);
    return 0;
}