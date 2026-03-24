#include <stdio.h>

int main() {
    int n;
    printf("enter the no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int target = 10,found=0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: (%d,%d) ", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    return 0;
}