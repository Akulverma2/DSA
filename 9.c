// third largest number
#include <stdio.h>
#include <limits.h>
int main() {
    int i,n;
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    int thirdlargest = INT_MIN;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] > largest){
        secondlargest = largest;
        largest = arr[i];
        }
        else if (arr[i] > secondlargest ){
            thirdlargest = secondlargest;
            secondlargest = arr[i];
        }
        else if (arr[i] > thirdlargest ){
            thirdlargest = arr[i];
        }
    }
printf("The third largest number is:%d", thirdlargest);
}