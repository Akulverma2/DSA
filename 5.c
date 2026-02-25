#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int *ptr, max;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = &arr;
    max = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    printf("Maximum = %d", max);
    return 0;
}