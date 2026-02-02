#include<stdio.h>
int main(){
  int i=1 , fact=1;
  while(i<=5){
    fact*=i;
    i++;
   }
   printf("%d",fact);
  return 0;
}