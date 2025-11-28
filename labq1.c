/*
Write a C program to perform add and subtraction and multiplication of 
two complex number using structures and functions
*/
#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1,complex n2);
complex sub(complex n1,complex n2);
complex mult(complex n1,complex n2);

int main() {
    complex n1, n2, result1, result2, result3;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result1 = add(n1, n2);
    result2= sub(n1,n2);
    result3= mult(n1,n2);
    

    printf("addition = %.1f + %.1fi", result1.real, result1.imag);
    printf("subtraction = %.1f - %.1fi", result1.real, result1.imag);
    printf("multiply = %.1f * %.1fi", result1.real, result1.imag);
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2) {
    complex temp1;
    temp1.real = n1.real - n2.real;
    temp1.imag = n1.imag - n2.imag;
    return (temp1);}

complex mult(complex n1, complex n2) {
    complex temp2;
    temp2.real = n1.real * n2.real;
    temp2.imag = n1.imag * n2.imag;
    return (temp2);}

