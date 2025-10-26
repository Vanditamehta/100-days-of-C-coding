//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main() 
{
    int n, i, x;
    printf(" Enter number of elements: ");
    scanf("%d", &n);      
    int arr[n];
    for (i = 0; i < n; i++)  
    printf(" enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    printf(" Enter number to find: ");
    scanf("%d", &x);         
    for (i = 0; i < n; i++) 
    { 
        if (arr[i] == x) 
        {   
            printf("Found at index %d\n", i);
        }
    }
    printf("-1\n"); 
    return 0;
}
