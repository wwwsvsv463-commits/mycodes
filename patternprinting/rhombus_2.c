#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows for the rhombus: ");
    scanf("%d", &rows);

    
    for (i = 1; i <= rows; i++) {
        
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= rows; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}