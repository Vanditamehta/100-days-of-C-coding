//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
int main()
{
    int a, b, c;
    float discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c:");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        printf("the equation has 2 real and distinct roots\n");
    }
    else if (discriminant == 0)
    {
    
        printf("the equation has 2 real and equal roots.\n", );
    }
    else
    {
    printf("the equation has 2 imaginary roots.\n");
    }
}