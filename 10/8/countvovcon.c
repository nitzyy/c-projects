#include <stdio.h>
int main() {
    char str[100];
    int i, v=0, c=0;
    printf("enter string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else
            c++;
    }
    printf("Vowels: %d, Consonants: %d\n", v, c);
    return 0;
}
