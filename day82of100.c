//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum TrafficLight { RED, YELLOW, GREEN };

int main() 
{
    enum TrafficLight light;
    printf("Enter traffic light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &light);

    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
