#include <stdio.h>
int main() {
    int a1, a2, a3;
    printf("Enter three angles: ");
    scanf("%d%d%d", &a1, &a2, &a3);

    if (a1 + a2 + a3 == 180)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");

    return 0;
}
