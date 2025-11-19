//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

    int diagElements[10];
    int diagCount = 0;
    for (int i = 0; i < rows && i < cols; i++) 
    {
        diagElements[diagCount++] = matrix[i][i];
    }

    int isDistinct = 1;
    for (int i = 0; i < diagCount; i++) {
        for (int j = i + 1; j < diagCount; j++) 
        {
            if (diagElements[i] == diagElements[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) 
        {
            break;
        }
    }

    if (isDistinct) 
    {
        printf("True\n");
    } else 
    {
        printf("False\n");
    }

    return 0;
}