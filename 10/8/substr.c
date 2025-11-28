#include <stdio.h>
int main() {
    char str[100], sub[100];
    int i,j,found;
    printf("enter main string: ");
    scanf("%s", str);
    printf("enter substring: ");
    scanf("%s", sub);
    for(i=0; str[i]!='\0'; i++) {
        found=1;
        for(j=0; sub[j]!='\0'; j++) {
            if(str[i+j]!=sub[j]) { found=0; break; }
        }
        if(found) {
            printf("Found at position %d\n", i+1);
            return 0;
        }
    }

    printf("Not found\n");
    return 0;
}
