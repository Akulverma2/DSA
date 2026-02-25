//inserting an number in sorted array
#include <stdio.h>
int main(){
    int i, n, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements (ascending order):\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    i = n - 1;
    while(i >= 0 && arr[i]>value){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = value;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
