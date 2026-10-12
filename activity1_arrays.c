// ELEC2645 Unit 1.2 Activity 1 - Arrays
// Write a program that prompts the user to enter 5 numbers, stores them in an array,
// squares each number, and then prints the sum of the squared numbers.

#include <stdio.h>
int main(void) {
    int numbers[5];
    int sum = 0;
    // Prompt user to enter 5 numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    // create another for loop to square each number in the array
    for (int i = 0; i < 5; i++) {
        numbers[i] *= numbers[i];
        sum += numbers[i];
    }
    // Next print the sum of the squared array
    // Keep this line unchanged so ELEC2645 Bot can check the result.
    printf("\nSum = %d\n", sum);
    return 0;
}
