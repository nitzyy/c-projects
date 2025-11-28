#include <stdio.h>
int main() {
    int ram, sham, ajay;
    printf("Enter ages of Ram, Shyam, Ajay: ");
    scanf("%d%d%d", &ram, &sham, &ajay);

    if (ram < sham && ram < ajay)
        printf("Ram is youngest\n");
    else if (sham < ram && sham < ajay)
        printf("Sham is youngest\n");
    else
        printf("Ajay is youngest\n");

    return 0;
}
