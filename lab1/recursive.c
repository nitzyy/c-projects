#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        printf("%d ", n);
    }

  

    // while (n>0)
    // {
    //     printf("%d ", n);
    //     n--;
    // }
    
}

int main() {
    int num = 5;
    printf("Printing numbers from 1 to %d:\n", num);
    printNumbers(num);
    /**
     * printNumbers(5) -> printNumbers(4)->  printNumbers(3)
     * 
     * What happens when you call printNumbers(5)?

        printNumbers(5)

        condition true → calls printNumbers(4) (doesn’t print yet)

        printNumbers(4)

        calls printNumbers(3) (still doesn’t print)

        printNumbers(3)

        calls printNumbers(2)

        printNumbers(2)

        calls printNumbers(1)

        printNumbers(1)

        calls printNumbers(0)

        printNumbers(0)

        condition false → returns immediately.

        Now the recursion starts unwinding (stack unwinds):

        printNumbers(1) prints 1

        printNumbers(2) prints 2

        printNumbers(3) prints 3

        printNumbers(4) prints 4

        printNumbers(5) prints 5
     * 
     * 
     * 
     * 
     */

    // for (int i = 1; i <= num; i++) {
    //     printf("%d ", i);
    // }
    printf("\n");
    return 0;
}