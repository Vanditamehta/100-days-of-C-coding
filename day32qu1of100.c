//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main() 
{
    int n, a[100], i, x;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
         printf("Enter %d elemrnt:\n", n);
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("Found at index %d\n",i);
        }
    }
     printf("-1\n");
}
