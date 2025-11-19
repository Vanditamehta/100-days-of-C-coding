//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) 
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += a[i][i];
    }

    printf( "sum is: " "%d", sum);

    return 0;
}

