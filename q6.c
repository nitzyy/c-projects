/*
An identity matrix is a square matrix in which all the diagonal elements are 1 and all other
elements are 0.
For example,
1 0 0
0 1 0
0 0 1
Write a program to check whether a given matrix is an identity matrix or not
*/
#include <stdio.h>
int main(){
    int a[3][3], i,j, flag=1;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0)) flag=0;
    if(flag) printf("identity");
    else printf("not identity");
}
