#include <stdio.h>
int main() {
    int num, rev = 0, temp;
    printf("Enter 5-digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    printf("Reversed: %d\n", rev);
    if (rev == num)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}
