/*The product of two matrices A (m×n) and B (n×p) is another matrix C (m×p), where each
element is obtained by multiplying corresponding row and column elements.
Write a program to multiply two matrices (A: 3×2 and B: 2×3).*/
#include <stdio.h>
int main(){
    int a[3][2], b[2][3], c[3][3], i,j,k;
    for(i=0;i<3;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    for(i=0;i<2;i++) for(j=0;j<3;j++) scanf("%d",&b[i][j]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(k=0;k<2;k++) c[i][j]+=a[i][k]*b[k][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

