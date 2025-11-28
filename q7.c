/*
In a square matrix, the elements above the main diagonal form the upper triangular part,
and the elements below the diagonal form the lower triangular part.
Write a program to display the upper triangular and lower triangular parts of a given 3×3
matrix separately
*/
#include <stdio.h>
int main(){
    int a[3][3], i,j;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    printf("upper:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf(i<=j? "%d ":"0 ",a[i][j]);
        printf("\n");}
    printf("lower:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf(i>=j? "%d ":"0 ",a[i][j]);
        printf("\n");
    }
}
