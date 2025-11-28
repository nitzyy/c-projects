#include <stdio.h>
#include <string.h> //ascii comparison
int main() {
    char str1[50], str2[50];
    printf("enter 1 string: "); 
    scanf("%s",str1);
    printf("enter 2  string: ");
    scanf("%s",str2);
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("First string is smaller.\n");
    else
        printf("First string is greater.\n");
    return 0;
}
