#include<stdio.h>
int main(){
    int marks[10],i,min=0,max=0;
    printf("enter marks");
    for(i=0;i<=9;i++){
        scanf("%d",&marks[i]);} 
        min=marks[0];
        max=marks[0];
        for(i=1;i<10;i++){
           
          if(min>marks[i]){
               min=marks[i];}
         
          if(max<marks[i]){
              max=marks[i];}
        }
     printf("minimum = %d\n",min);
     printf("maximum = %d",max);
         
    return 0;
}