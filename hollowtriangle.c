#include <stdio.h>
int main(){
    int i,j,n=5;
    for (i=1;i<=n;i++){
        for (j=i;j<=n;j++){
            printf(" ");
        }
        printf("\n");
    }
    for (int k=1;k<=(2 *i-1);k++){
        if(k==1||k==(2*i-1)||i==n)
            printf("*");
        else
            printf(" ");
    }

}