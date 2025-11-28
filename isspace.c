#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    printf("enter a character");
    scanf(" %c", &c);
    if (isspace(c))
        printf("It is a whitespace character.\n");
    else
        printf("It is not whitespace.\n");
    return 0;
}
