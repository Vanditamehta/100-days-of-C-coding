//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    char words[20][50];
    int i = 0, j = 0, k = 0;
    printf("Enter a name:\n ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        } else {
            words[k][j++] = name[i];
        }
        i++;
    }
    words[k][j] = '\0'; 
    int totalWords = k + 1;
    for (i = 0; i < totalWords - 1; i++) {
        if (words[i][0] != '\0') {
            printf("%c.\n", words[i][0]);
        }
    }
    printf(" %s\n", words[totalWords - 1]);
    return 0;
}
