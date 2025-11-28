#include <stdio.h>
void printnumbers(int n){
    if (n>0){
        printnumbers(n-1);
        printf("%d ", n);
    }
}
int factorial(int n){
    if (n>0){
        printf("step %d",n);
       return n*factorial(n-1);
    }
// return 0;
}
int main(){
    int num=5;
    int fact;
    fact=factorial(num);
    printf("factorial of %d is  %d\n",num,fact);
    // printf("print numbers from 1 to 10 %d \n", num);
    // printnumbers(num);
}