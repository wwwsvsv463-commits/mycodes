#include<stdio.h>
int main(){
    int mat1[2][2],mat2[2][2],sum[2][2],i,j;
    printf("enter the elents in mat1");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter elements in mat 2");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&mat2[i][j]);
            
        }
    
    }    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",sum[i][j]);
        }
        
        printf("\n");
    }
     
           
    return 0;
    
}