//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/


#include <stdio.h>
int main() {
    char str[200];

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin); 

    int i = 0;
    int newWord = 1; 

    while (str[i] != '\0') 
    {
        if (newWord && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
            newWord = 0;
        } else if (str[i] == ' ') {
            newWord = 1; 
        } else {
            newWord = 0; 
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
