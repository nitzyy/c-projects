#include <stdio.h>
int gcd(int a,int b){
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}
int main(){
    int num1, num2;
    printf("enter num1 and num2\n");
    scanf("%d %d",&num1,&num2);
    printf("GCD of num1 and num2 is: %d\n",num1,num2,gcd(num1,num2));
    return 0;
}