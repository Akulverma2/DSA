//clculate sum of corresponding elements of an array
#include <stdio.h>
int main () {
int i,j,a,b;

printf("enter the no of rows:");
scanf("%d",&a);
printf("enter the no of coloumns:");
scanf("%d",&b);

int matrix1[a][b];
int matrix2[a][b];
int sum[a][b];
printf("the first array is:");
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        scanf("%d",&matrix1[i][j]);
    }
}
printf("the second array is:");
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        scanf("%d",&matrix2[i][j]);
    }
}
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
}
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        printf("%d ", sum[i][j]);
    }
    printf("\n");
}
    return 0;
}