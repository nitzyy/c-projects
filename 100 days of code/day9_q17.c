/*
Write a program to find the roots of a quadratic equation and categorize them.
*/
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    printf("enter num:");
    scanf("%lf %lf %lf",a,b,c);
    double discriminant = b * b - 4 * a * c;
    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }
    if (discriminant > 0) {
        // Real and Different Roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("roots are real and different: %.0lf, %.0lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Real and Same Roots
        double root = -b / (2 * a);
        printf("Roots are real and same: %.0lf\n", root);
    } 
    else {
        // Complex Roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex\n");
    }
    
    return 0;
}