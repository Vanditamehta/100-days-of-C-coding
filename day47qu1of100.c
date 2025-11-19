//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void toLowerCase(char str[]) 
{
    for (int i = 0; str[i]; i++) 
    {
        str[i] = tolower(str[i]);
    }
}
void sortString(char str[]) 
{
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) 
    {
        for (int j = i + 1; j < len; j++) 
        {
            if (str[i] > str[j]) 
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() 
{
    char str1[MAX], str2[MAX];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    toLowerCase(str1);
    toLowerCase(str2);
    sortString(str1);
    sortString(str2);
    if (strcmp(str1, str2) == 0) 
    {
        printf("Anagrams\n");
    } 
    else 
    {
        printf("Not anagrams\n");
    }
    return 0;
}