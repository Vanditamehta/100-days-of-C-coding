//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() 
{
    enum Status s;

    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &s);
    switch(s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
            break;
    }
  return 0;
}
