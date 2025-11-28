#include <stdio.h>
int main(){
    int i,j,k,n=5;
    for(i=0;i<=5;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        printf("\n");
        for(k=0;k<=(2*i-1);k++){
            printf("*");
        }
    }
}
