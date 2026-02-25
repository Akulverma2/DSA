#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;  
    int *ptr;             
    printf("Enter a number: ");
    scanf("%d", &n);
    ptr = &n; 
    for (i = 1; i <= *ptr; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is = %lld", *ptr, fact);
    return 0;
}
