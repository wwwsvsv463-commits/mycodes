#include<stdio.h>

int main() {
    int i, n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime or composite\n");
        return 0;
    }

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            count = 1;
            break;
        }
    }

    if (count == 0) {
        printf("Prime number\n");
    } else {
        printf("Composite number\n");
    }

    return 0;
}
 