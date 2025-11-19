//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[10][10];
    if (rows != cols) 
    {
        printf("False");
        return 0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (a[i][j] != a[j][i]) {

                printf("False");
                return 0;
            }
        }
    }

    printf("True");
}
