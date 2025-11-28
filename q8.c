/*
The secondary diagonal of a square matrix is formed by the elements where row index +
column index = n – 1.
For example, in a 3×3 matrix: elements (0,2), (1,1), and (2,0).
Write a program to find the sum of secondary diagonal elements of a given matrix
*/
#include <stdio.h>
int main(){
    int a[3][3], i,j,sum=0;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) sum+=a[i][2-i];
    printf("Sum=%d",sum);
}
