//Find Mean of n Numbers Using Array
#include <stdio.h>
int main(){
    int n,i;
    float sum=0,mean;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    mean= sum/n;
    printf("the mean is %f",mean);
    return 0;
}