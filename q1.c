/*
A matrix is a two-dimensional array of numbers arranged in rows and columns.
Write a program to read a 3×3 matrix from the user and display it in matrix form.
*/
#include <stdio.h>
int main(){
    int a[3][3], i, j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]); // i=rows j=coloumns
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
