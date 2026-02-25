//inserting an number
#include <stdio.h>
int main(){
    int i,n,pos,value;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int arr[100];
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position:");
    scanf("%d",&pos);
    printf("enter the numer to be inserted:");
    scanf("%d",&value);
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    printf("the new array is:");
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0 ;
}