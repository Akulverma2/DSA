// Wap to print a 2d array
#include <stdio.h>
int main () {
    int rows,col,i,j;
    printf("enter no of rows:");
    scanf("%d",&rows);
    printf("enter no of columns:");
    scanf("%d",&col);
    int arr[rows][col];
    printf("the array is:");
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
  for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }  

    return 0;
}