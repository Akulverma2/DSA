#include <stdio.h>
int main() {
    int n, i, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to delete: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            for(int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}