//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, pos;
    printf(" Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        printf(" enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" Enter position to delete (1 to %d): ", n);

    scanf("%d", &pos);

    pos--;  
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
