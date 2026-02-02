#include<stdio.h>
int main(){
    float a , b ;
    char op;
    printf("enter operation + - / * ");
    scanf("%c",&op);
    if(op=='/'){
        printf("for division b should not be equal to zero\n");
    }
    
    printf("enter the operands");
    scanf("%f""%f",&a,&b);
   
    switch(op){
    case'+': printf("addition=%f",a+b);
             break;
    case'-': printf("sub =%f",a-b);
             break;
    case'*': printf("mul =%f", a*b);
             break;
    case'/': printf("div = %f",a/b);
             break;
    default: printf("enter correct operation");
}
return 0;
}
