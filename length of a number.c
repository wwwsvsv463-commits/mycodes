// length of a number

#include<stdio.h>
int main(){
    int count=0,n;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count+=1;
    }
    printf("length is %d",count);
    return 0;
}