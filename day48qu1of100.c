//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
#define MAX 100
int isRotation(char str1[], char str2[]) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) 
    {
        return 0;
    }
    char temp[MAX * 2];
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) 
    {
        return 1;
    }
    return 0;
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
    if (isRotation(str1, str2)) 
    {
        printf("Rotation\n");
    } 
    else 
    {
        printf("Not rotation\n");
    }
    return 0;
}