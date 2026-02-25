//transpose a 3*3 matrix
#include <stdio.h>
int main () {
int i,j;
int  arr[3][3];
int transpose[3][3];
printf("the elements are:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        transpose[j][i]=arr[i][j];
    }
}    
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ", transpose[i][j]);
    }
    printf("\n");
}            
    return 0;
}