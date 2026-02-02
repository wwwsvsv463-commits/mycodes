#include<stdio.h>
int main(){
    int mat1[5][5],mat2[5][5],mat3[5][5],i,j,k,r1,r2,c1,c2;
    printf("enter the number of rows in matrices 1 and 2");
    scanf("%d""%d",&r1,&r2);
    printf("enter the number of columns in matrices 1 and 2");
    scanf("%d""%d",&c1,&c2);
    printf("enter elements in mat1");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        printf("%d\t",mat1[i][j]);
        printf("\n");
        }
    }
    printf("enetr elements in mAT2");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        printf("%d\t",mat2[i][j]); 
        printf("\n");  
        }
    
    }
    mat3[5][5]=0;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c2;k++){
                mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][i];
            printf("%d\t",mat3[i][j]);      
            }
        printf("\n");
        }
   
    }
    return 0;
}

            