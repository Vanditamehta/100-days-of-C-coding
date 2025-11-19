//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal: ");
    for (int d = 0; d < rows + cols - 1; d++) 
    {
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;

        while (r < rows && c >= 0) 
        {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
    }
    printf("\n");
    return 0;
}