#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[50];
    printf("enter 1st string: ");
    scanf("%s", str1);
    printf("enter 2nd string: ");
    scanf("%s", str2);
    strcat(str1, str2);  // joins str2 at the end of str1
    printf("After concatenation: %s\n", str1);
    return 0;
}
