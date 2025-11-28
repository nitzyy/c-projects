#include <stdio.h>
int main(){
    int i,j,n=5;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0||j==4||i==0||i==4){ 
                printf(" * ");
            }
            else{
                printf("   ");
            }
            // printf(" * ");
        }
        printf("\n");
    }

}