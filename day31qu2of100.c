//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main()
{
    int n, r, i, num, maxDigit = 0,maxCount = 0,count[10];
    for(i=0;i<10;i++)
    {
        count[i]=0;
    }
    printf("Enter an integer number: ");
    scanf("%d",&n);
    num = n;
    while(num>0)
    {
        r = num % 10;
        count[r]++;
        num = num / 10;
    }
    for(i=0;i<10;i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    printf("%d\n", maxDigit);
}