//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int rev = 0;

    while(n > 0) 
    {
        rev = rev * 10 + (n % 2);
        n = n / 2;
    }

    int binary = 0;
    while(rev > 0) 
    {
        binary = binary * 10 + (rev % 10);
        rev = rev / 10;
    }

    if (binary == 0)
        printf("0\n");
    else
        printf("%d\n", binary);

    return 0;
}
