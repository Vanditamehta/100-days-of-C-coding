//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() 
{
    int n, i, a[100], positive = 0, negative = 0, zero = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    printf("Enter %d elements:\n", n);
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) 
    {
        if(a[i] > 0) 
        {
            positive++;
        } else if(a[i] < 0) 
        {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);
}
