//wap to print the multiplication table of a user defined number nkeep the format n*1=n
#include <stdio.h>
int main() {
    int i, n, range;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter range: ");
    scanf("%d", &range);
    printf("multiplication table %d:\n", n);

    for (i = 1; i <= range; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
