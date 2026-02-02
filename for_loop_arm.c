#include<stdio.h>
#include<math.h>
int main(){
    int count=0,n,arm,pw,rem,sum=0,org,t,i;
    for(i=1;i<=10;i++){
       org=i;    
       while(i!=0){
         i=i/10;
         count+=1;
       }


       t=org;
 
       while(t!=0){
          rem=t%10;
          pw=pow(rem,count);
          sum=sum+pw;
          t=t/10;
        }
       if(sum==org)S
       printf("%d",i);
       
       
    }
    return 0;
}