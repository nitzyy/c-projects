#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    printf("enter a character: ");
    scanf(" %c", &c); 
    if (isalpha(c))
        printf("%c is a letter\n", c);
    else
        printf("%c is not a letter\n", c);
    return 0;
}
