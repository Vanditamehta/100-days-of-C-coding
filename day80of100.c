//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>
int main() 
{
    FILE *file;
    char name[50];
    int roll, marks;
    int n; 

    printf("Enter number of students: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", name); 
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file); 

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    printf("\nStudent Records:\n");
  
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file); 

    return 0;
}
