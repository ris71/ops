#include <stdio.h>

int main() {
    // Define the dimensions for semester, student, and subject
    int semesters = 2;   // e.g., 2 semesters
    int students = 3;    // e.g., 3 students per semester
    int subjects = 4;    // e.g., 4 subjects per student

    // Declare a 3D array
    int marks[semesters][students][subjects];

    // Input marks for each semester, student, and subject
    for (int sem = 0; sem < semesters; sem++) {
        printf("Semester %d:\n", sem + 1);
        for (int stu = 0; stu < students; stu++) {
            printf("  Student %d:\n", stu + 1);
            for (int sub = 0; sub < subjects; sub++) {
                printf("    Enter marks for Subject %d: ", sub + 1);
                scanf("%d", &marks[sem][stu][sub]);
            }
        }
    }

    // Display the marks
    printf("\nStored Marks:\n");
    for (int sem = 0; sem < semesters; sem++) {
        printf("Semester %d:\n", sem + 1);
        for (int stu = 0; stu < students; stu++) {
            printf("  Student %d: ", stu + 1);
            for (int sub = 0; sub < subjects; sub++) {
                printf("%d ", marks[sem][stu][sub]);
            }
            printf("\n");
        }
    }

    return 0;
}
