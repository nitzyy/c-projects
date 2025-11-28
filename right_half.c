#include <stdio.h>
int main(){
    int i,j,n=5;
    for(i=0;i<n;i++){
        printf("\n");
        for (j=0;j<i;j++){
            printf("*");
        }
    }
}