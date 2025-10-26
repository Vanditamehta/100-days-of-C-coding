//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main()
{int n, original , sum=0;
printf("enter the number please:");
scanf("%d",&n);
original=n;
while(n>0)
{
    int digit= n%10;
    sum =sum+(digit*digit*digit);
    n=n/10;
}
if(original==sum)
printf("the entered number is Armstrong\n");
else
printf("the entered number isnt Armstrong\n");
return 0;
}