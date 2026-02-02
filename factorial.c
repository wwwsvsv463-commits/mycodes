#include<stdio.h>
int main(){
    int i=1,fact=1,n;
    printf("enter number");
    scanf("%d",&n);
    for(i<=n;i;i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}