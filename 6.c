//Read and Display n Numbers Using Array
#include <stdio.h>
int main() {
    int n,i;
    printf("no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the numbers are:");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}