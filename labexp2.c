#include <stdio.h>
int main() {
    int n, i, same= 1;
    printf("enter size of arr: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("enter elements of a:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter elements of b:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = 0;
            break;
        }
    }
    if (same)
        printf("All elements are equal.\n");
    else
        printf("Arrays are not equal.\n");

    return 0;
}
