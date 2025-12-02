/*
Write a program to input three numbers and find the largest among them using if–else.
*/
// Q16 (Conditional Statements)
// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("enter 3 numbers");
    scanf("%d %d %d",a,b,c);
    if (a >= b && a >= c) {
        largest = a;
    } 
    else if (b >= a && b >= c) {
        largest = b;
    } 
    else {
        largest = c;
    }
    printf("Largest is %d\n", largest);
    return 0;
}