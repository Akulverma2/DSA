#include <stdio.h>
int main() {
    int n, i;
    int *ptr;
    printf("Enter a number: ");
    scanf("%d", &n);
    ptr = &n;
    if (*ptr <= 1) {
        printf("%d is NOT a Prime number", *ptr);
        return 0;
    }
    for (i = 2; i < *ptr; i++) {
        if (*ptr % i == 0) {
            printf("%d is NOT a Prime number", *ptr);
            return 0; 
        }
    }
    printf("%d is a Prime number", *ptr);
    return 0;
}
