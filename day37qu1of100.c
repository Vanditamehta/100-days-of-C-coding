//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int rowSums[100];
    for (int i = 0; i < rows; i++) 
    {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) 
        {
            rowSums[i] += matrix[i][j];
        }
    }
    printf("Sum of each row: ");
    for (int i = 0; i < rows; i++) 
    {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
}