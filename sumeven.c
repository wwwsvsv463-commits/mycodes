#include<stdio.h>
int main(){
    int i=0,n,sumev=0,sumod=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i;i<=n;i++){
        if(i%2==0)
            sumev+=i;
        else
            sumod+=i;
    }
    printf("sum of even numbers are%d\n",sumev);
    printf("sum of odd numbers are%d",sumod);
    return 0;
}

