/*
1
23
456
78910

run loop 4 times
need to create nested loop first loop will run 4 times becs there are 4 rows
break line using \n
nested loop will increment the number by 1

int i,j,n=5
i=1;i
*/

#include <stdio.h>
int main(){
    int i,j,n=4,a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a++);
        }
    printf("\n");
}
}