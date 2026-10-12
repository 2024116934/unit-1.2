// ELEC2645 Unit 1.2 Activity 2 - 2D Arrays
// This program demonstrates the use of 2D arrays in C.
// Write a program that initializes a 2D array, calculates its dimensions using sizeof,
// computes the sum and average of all elements.
// Please keep the print statements as specified in the comments.

#include <stdio.h>
int main(void) {
    // Initialize a 2D array with 3 rows and 4 columns
    // remember that array indexing starts at 0
    // and you specify the rows first then the columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // Use sizeof to find the total size, row size, and element size
    int total_size = sizeof(arr);
    int row_size = sizeof(arr[0]);      // size of one row
    int element_size = sizeof(arr[0][0]);// size of single int element

    // Calculate rows and cols
    int rows = total_size / row_size;
    int cols = row_size / element_size;

    // Step 1: Print the Total size, rows, cols, and a specific element
    printf("Total size: %d bytes\n", total_size);
    printf("Rows: %d, Cols: %d\n", rows, cols);
    // 2nd row(index=1), 3rd col(index=2)
    printf("2nd row 3rd col: %d\n", arr[1][2]);

    // Step 2: Compute the Sum of all elements using nested loops
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);

    // Step 3: Compute the Average of all elements
    // Remember to cast sum to float to avoid integer division
    float average = (float)sum / (rows * cols);
    // We are using %.2f to limit the float to 2 decimal places
    printf("Average of all elements: %.2f\n", average);
    return 0;
}

