#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,sum;
    float per;
    printf("enter the marks");
    scanf("%d""%d""%d""%d""%d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    per=sum/5;
     if(per>=90){
      printf("a grade");}
        if(per>=80 && per<90){
           printf(" b grade");}
             if(per>=70 && per<80){
                printf("c grade");}
                 if(per>=60 && per<70){
                   printf("d grade");}
                     if(per<60){
                       printf("e grade");}

                       return 0;
}