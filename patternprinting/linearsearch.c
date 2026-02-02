#include<stdio.h>
int main(){
    int  i ,arr[10],num , count=0;
    printf("enter the elements in array");
    for(i=1;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&num);
    for(i=1;i<=5;i++){
      if(num==arr[i])
         printf("element found at index %d",i-1);
      else 
         count = count+1;
      }
       if(count==5)
         printf("element not found");
return 0;
         
      
    

    
      
    
    
    
return 0;

}
