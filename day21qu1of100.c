//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int num, n, rev = 0, count = 0;
    int firstDigit, lastDigit;
    printf("Enter the num: ");
    scanf("%d", &num);
    n = num;

    lastDigit = n % 10;
    while (n != 0) 
    {
        firstDigit = n % 10;
        n = n / 10;
        count++;
    }
    n = num;
    int i = 0;
    while (n != 0) 
    {
        int digit = n % 10;
        n /= 10;

        if (i == count - 1)
            digit = lastDigit;
        else if (i == 0)
            digit = firstDigit;

        rev = rev * 10 + digit;
        i++;
    }
    int result = 0;
    while (rev != 0) 
    {
        result = result * 10 + (rev % 10);
        rev /= 10;
    }

    printf("%d\n", result);

    return 0;
}
