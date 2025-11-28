/*
It copies the entire source string, including the '\0' null terminator, into the destination.
strcpy()
strcpy(dest, src); where, 
dest:Pointer to the destination character array where the content is to be copied.
src: Pointer to the source character array which is to be copied.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello";
    char s2[20] = "hi";
    char s3[40];
    strcpy(s2, s1); //s1 to s2
    strcpy(s3, "Copy successful");
    printf("s1: %s\n", s1);
  	printf("s2: %s\n", s2);
  	printf("s3: %s", s3);
    return 0;
}