//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#define MAX 200
int main() 
{
    char sentence[MAX];
    char longestWord[MAX] = "";
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character
    char *token = strtok(sentence, " ");
    while (token != NULL) 
    {
        if (strlen(token) > strlen(longestWord)) 
        {
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " ");
    }
    printf("Longest word: %s\n", longestWord);
    return 0;
}