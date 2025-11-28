#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter string: ");
    scanf("%s", str);
    printf("uppercase: ");
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') str[i]-=32; // -32 is used to convert from lowercase char to uppercase for ASCII values
        printf("%c", str[i]);
    }
    printf("\n");
    printf("lowercase: ");
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='A' && str[i]<='Z') str[i]+=32;
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
