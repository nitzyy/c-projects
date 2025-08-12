#include <stdio.h>
int main() {
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f%f", &l, &b);

    float area = l * b;
    float peri = 2 * (l + b);

    if (area > peri)
        printf("Area is greater\n");
    else
        printf("Perimeter is greater\n");

    return 0;
}
