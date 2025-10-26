//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n1, n2, a[100], b[100], c[200], i, j, k = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    for(i = 0; i < n1; i++) 
    {
        printf("Enter %d elements:\n", n1);
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++) 
    { printf("Enter %d elements:\n", n2);
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n1; i++) 
    {
        c[k] = a[i];
        k++;
    }
    for(i = 0; i < n2; i++) 
    {
        c[k] = b[i];
        k++;
    }
    for(i = 0; i < k; i++) 
    {
        printf("%d ", c[i]);
    }

    return 0;
}