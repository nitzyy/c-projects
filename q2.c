/*
In a matrix, the row sum is the sum of elements in each row, and the column sum is the sum
of elements in each column.
Write a program to calculate and print the sum of each row and each column of a 3×3
matrix.
*/
#include <stdio.h>
int main(){
    int a[3][3],i,j,s;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        s=0;
        for(j=0;j<3;j++) s+=a[i][j];
        printf("Row %d = %d\n",i+1,s);
    }
    for(j=0;j<3;j++){
        s=0;
        for(i=0;i<3;i++) s+=a[i][j];
        printf("Col %d = %d\n",j+1,s);
    }
}
