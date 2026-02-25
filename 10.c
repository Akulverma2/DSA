// Check Whether Array Contains Duplicate Number
#include <stdio.h>
int main(){
    int i,j,n,found=0;
    printf("The no of elements are:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                found=1;
                break;
            }
        }
    }
    
    return 0;
}