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
    int row_size = 0;
    int element_size = 0;

    // Calculate rows and cols


    // Step 1: Print the Total size, rows, cols, and a specific element

    printf("Total size: %d bytes\n", 0);
    printf("Rows: %d, Cols: %d\n", 0, 0);
    printf("2nd row 3rd col: %d\n", 0);

    // Step 2: Compute the Sum of all elements using nested loops

    // Loop through array and compute sum


    printf("Sum of all elements: %d\n", 0);

    // Step 3: Compute the Average of all elements
    // Remember to cast sum to float to avoid integer division
    // what would happen if you didn't cast to float?
    //
    // We are using %.2f to limit the float to 2 decimal places

    printf("Average of all elements: %.2f\n", 0.1337);

    return 0;
}
