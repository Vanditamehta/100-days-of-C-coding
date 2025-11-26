//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int len, i, j, k;
printf("Enter a string:\n ");
    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c\n", str[k]);
            }
            if (i != len-1 || j != len-1)
                printf(",\n");  
        }
    }
    return 0;
}

