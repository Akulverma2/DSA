// wap to read and display 3*3 matrix
#include <stdio.h>

int main () {
int arr[3][3];
int i,j;
printf("the elements are :");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
printf("%d ", arr[i][j]);
    }
    printf("\n");
}
    return 0;
}