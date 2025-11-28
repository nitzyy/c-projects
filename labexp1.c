#include <stdio.h>
int main() {
    float num;
    int intp;
    float fracp;
    printf("enter a float num: ");
    scanf("%f", &num);
    intp = (int)num;
    fracp = num - intp;    
    if (fracp < 0) fracp = -fracp; 
    printf("integer part: %d\n", intp);
    printf("fractional part: %f\n", fracp);
    return 0;
}
