#include <stdio.h>

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare the 2D array
    int array[rows][cols];

    // Input elements in the array
    printf("\nEnter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Display the array
    printf("\nThe array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
