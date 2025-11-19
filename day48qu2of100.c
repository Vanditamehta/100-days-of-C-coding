//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
#define MAX 200
void reverseWord(char str[], int start, int end) 
{
    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    char sentence[MAX];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character
    int start = 0;
    for (int i = 0; ; i++) 
    {
        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
        if (sentence[i] == '\0') 
        {
            break;
        }
    }
    printf("Sentence with reversed words: %s\n", sentence);
    return 0;
}