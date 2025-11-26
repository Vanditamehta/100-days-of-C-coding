//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/


#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inputFile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper((unsigned char)ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and written to output.txt successfully.\n");
    return 0;
}

