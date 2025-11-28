#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int digits=0, spaces=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i=0; str[i]!='\0'; i++) {
        if (isdigit(str[i])) digits++;
        if (isspace(str[i])) spaces++;
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string: %s\n", str);
    printf("Digits: %d, Spaces: %d\n", digits, spaces);
    return 0;
}

