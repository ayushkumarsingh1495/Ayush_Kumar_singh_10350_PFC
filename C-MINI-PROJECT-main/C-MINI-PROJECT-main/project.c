#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';

    // Analyze palindrome
    if (strcmp(str, rev) == 0) {
        printf("Result: The given string is a PALINDROME\n");
    } else {
        printf("Result: The given string is NOT a palindrome\n");
    }

    return 0;
}

/*
Mini Project Name: Palindrome String Analyzer
Made by Ayush Singh
Class: IBM A
*/
