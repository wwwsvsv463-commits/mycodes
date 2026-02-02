#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,mat1[5][5], mat2[5][5],mult[5][5],k,j;

    printf("enter the numer of rows and coloum in first matrix");
    scanf("%d%d",&r1,&c1);

    printf("enter the numer of rows and coloum in second matrix");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("multiplication not possible");
        return 1;
    }
   
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
           mult[i][j]=0;}}

    printf("enetr the elements in first matrix");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
        scanf("%d",&mat1[i][j]);
    } 
    }
    printf("enetr the elements in second matrix");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
        scanf("%d",&mat2[i][j]);
    } 
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
          for(k=0;k<c1;k++){
            mult[i][j]=mat1[i][k]*mat2[k][j]+mult[i][j];
             
          }

        }
        
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
           printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
    return 0;

 
} 
