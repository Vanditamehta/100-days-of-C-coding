//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main() 
{
    int rows1, cols1, rows2, cols2;
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    int matrix1[100][100];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2) 
    {
        printf("Error: Number of columns of first matrix must equal number of rows of second matrix.\n");
        return 1;
    }
    int matrix2[100][100];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int productMatrix[100][100];
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            productMatrix[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            printf("%d ", productMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}