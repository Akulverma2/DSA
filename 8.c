// second largest number
#include <stdio.h>
#include <limits.h>
int main(){
    int i,n;
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    printf("the no of elements are:");
    scanf("%d",&n);
    int arr[n];
    printf("the numbers are:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i] > secondlargest) {
            secondlargest = arr[i];
    }
}
    printf("the second largest no is:%d",secondlargest);
    return 0;
}
