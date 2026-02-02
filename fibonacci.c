#include<stdio.h>
int main(){
    int i,f=0,s=1,n=1,num;
    printf("enter the number of terms");
    scanf("%d",&num);
    printf("%d\n%d\n",f,s);
    for(i=1;i<=num-2;i++){
      n=f+s;
      f=s;
      s=n;
     
      
      printf("%d\n",n);
    }
    return 0;
}