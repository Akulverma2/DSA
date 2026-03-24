// Create an array 'a1' with 'n' elements. Insert an element in ith position of 'a1' and also delete an element from jth position of 'a1'.
#include <stdio.h>
int main () {
    int k,i,j,n,num;
    printf("enter the no of elements in array:");
    scanf("%d",&n);
    int a1[100];
    printf("enter the elements:");
    for(k=0;k<n;k++){
        scanf("%d",&a1[k]);
    }
    printf("enter the element to be inserted:");
    scanf("%d",&num);
    printf("enter the position:");
    scanf("%d",&i);
    for(k=n;k>=i;k--){
        a1[k]=a1[k-1];
    }
    a1[i-1]=num;
    n++;
    
printf("the array after insertion is:");
for(k=0;k<n;k++){
printf("%d ",a1[k]);
}

    return 0;
}