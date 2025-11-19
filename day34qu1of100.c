//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() 
{
    int n, i, pos, val;
    printf(" Enter number of elements: ");
    scanf("%d", &n);      
    int arr[n + 1];
    for (i = 0; i < n; i++)  
    {
        printf(" enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf(" Enter value to insert: ");
    scanf("%d", &val);
    for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}