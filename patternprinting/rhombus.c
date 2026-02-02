#include<stdio.h>
int main(){
    int i,n,j,s;
    printf("enter rows");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
       for(j=1;j<=2*n-1;j++){
       s=i+j;
       if(s>n && s<2*n+1) 
          printf("*");
       else printf(" ");
       }
       printf("\n");
    }
    return 0;
}