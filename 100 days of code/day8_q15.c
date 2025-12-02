/*
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("enter a charecter\n");
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("uppercase char\n");}
    else if(islower(ch)){
        printf("lowercase char\n");
    }
    else if(isdigit(ch)){
        printf("digit\n");
    }
    else{
        printf("invalid\n");
    }
    }