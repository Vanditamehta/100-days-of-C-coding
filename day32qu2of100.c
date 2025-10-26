//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main() 
{
    int n, a[100], i;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter %d element:\n", n);
        scanf("%d", &a[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
