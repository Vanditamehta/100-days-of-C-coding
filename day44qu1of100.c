//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int main() 
{
    char s[200];
    int spaces = 0, digits = 0, special = 0;
    printf("Enter a string:\n ");
    scanf("%s", s);
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] == ' ') {
            spaces++;
        }
        else if (s[i] >= '0' && s[i] <= '9') 
        {
            digits++;
        }
        else if ((s[i] >= 'A' && s[i] <= 'Z') ||
                 (s[i] >= 'a' && s[i] <= 'z')) 
                 {
                    }
        else if (s[i] != '\n') {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n",
           spaces, digits, special); 
    return 0;
}
