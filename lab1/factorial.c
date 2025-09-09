/*
factorial of 10
first initialise variable with 1
start loop till 10 and multiply variable with loop variable
*/
#include <stdio.h>
int main(){
    long fact=1;
    int i,n=10;
    for(i=1;i<=n;i++){
        fact=fact*i;   
    }
    printf("%lld",fact);
}