/*
The transpose of a matrix is obtained by interchanging its rows and columns.
For example, the transpose of
1 2 3
4 5 6
is
1 4
2 5
3 6
Write a program to find the transpose of a given matrix
*/
#include <stdio.h>
int main(){
    int a[3][3], i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
}
