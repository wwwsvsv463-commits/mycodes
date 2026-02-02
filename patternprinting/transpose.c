#include<stdio.h>
int main(){
    int r1,c1,i,mat1[5][5], trns[5][5],j;

    printf("enter the numer of rows and coloum in first matrix");
    scanf("%d%d",&r1,&c1);

    printf("enetr the elements in first matrix");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
          scanf("%d",&mat1[i][j]);
    } }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
           printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");





    
    
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
          trns[j][i]=mat1[i][j];
        
             
          }

    }
        
    
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++){
           printf("%d\t",trns[i][j]);
        }
        printf("\n");
    }
    return 0;

 
} 
