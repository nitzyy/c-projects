/*
A matrix can be printed in a spiral form by starting from the top-left corner, moving right,
then down, then left, and so on.
Write a program to print the elements of a given 3×3 matrix in spiral order
*/
#include <stdio.h> //(took help in this question)
int main(){
    int a[3][3], i,j, top=0,bot=2,l=0,r=2;
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);
    while(top<=bot && l<=r){
        for(i=l;i<=r;i++) printf("%d ",a[top][i]); top++;
        for(i=top;i<=bot;i++) printf("%d ",a[i][r]); r--;
        for(i=r;i>=l;i--) printf("%d ",a[bot][i]); bot--;
        for(i=bot;i>=top;i--) printf("%d ",a[i][l]); l++;
    }
}
