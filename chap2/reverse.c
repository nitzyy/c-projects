#include <stdio.h>
int main() {
    int num, rev = 0, temp;
    printf("Enter 5-digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
         //0+ 12345%10=5
        //5*10+4=54
        //54*10+3=543
        //543*10+2=5432
        //5432*10+1=54321
        //54321*10+0=543210
        //temp=12345/10=1234
        temp /= 10;
    }
    printf("Reversed: %d\n", rev);
    if (rev == num)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}
