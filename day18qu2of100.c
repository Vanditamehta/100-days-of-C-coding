//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() 
{
    int a, b;
    printf("Enter two numbers here: ");
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);
    printf("%d\n", result);

    return 0;
}
