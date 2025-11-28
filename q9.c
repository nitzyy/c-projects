/*
A saddle point is an element of the matrix which is the minimum in its row but maximum in
its column.
Write a program to check whether a given matrix contains a saddle point. If it exists, display
it; otherwise display “No Saddle Point”.
*/
#include <stdio.h> // (took help in this question)
int main(){
    int a[3][3], i,j,k, min, col, flag=0;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        min=a[i][0]; col=0;
        for(j=1;j<3;j++) if(a[i][j]<min){ min=a[i][j]; col=j; }
        int big=1;
        for(k=0;k<3;k++) if(a[k][col]>min) big=0;
        if(big){ printf("saddle=%d",min); flag=1; }
    }
    if(!flag) printf("no saddle");
}
