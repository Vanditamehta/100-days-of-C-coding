//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>
int main() 
{
    int n, k;
    printf(" Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) 
    {
        printf(" enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n; 

    int temp[100];
    for (int i = 0; i < k; i++) 
    {
        temp[i] = arr[n - k + i];
    }
    for (int i = n - 1; i >= k; i--) 
    {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) 
    {
        arr[i] = temp[i];
    }
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
