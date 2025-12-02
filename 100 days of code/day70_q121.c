#include <stdio.h>
#include <string.h>
int main() {
    FILE *f = fopen("info.txt", "w");  // Open file in write mode
    if(f == NULL) {
        printf("File could not be opened!");
        return 1;
    }
    char name[100];
    int age;
    printf("Enter name: ");
    fgets(name, 100, stdin);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("Data successfully saved");
    }
