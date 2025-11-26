//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[200];
    int i = 0;
    printf("Enter a name:\n ");
    fgets(name, sizeof(name), stdin);
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c.\n", name[0]);
    for (i = 1; name[i] != '\0'; i++) 
    {
        if (name[i-1] == ' ' && name[i] != ' ' && name[i] != '\n') 
        {
            printf("%c.\n", name[i]);
        }
    }
    return 0;
}

