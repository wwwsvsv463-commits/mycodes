#include<stdio.h>
#include<math.h>
int main(){
    int count=0,n,arm,pw,rem,sum=0,org,t;
    printf("enter number");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        n=n/10;
        count+=1;
    }


    t=org;
 
    while(t!=0){
        rem=t%10;
        pw=pow(rem,count);
        sum=sum+pw;
        t=t/10;
    }
    if(sum==org)
    printf("armstrong number");
    else
    printf("not a armstrong number");
    return 0;
}