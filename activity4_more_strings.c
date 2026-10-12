// ELEC2645 Unit 1.2 Activity 4 - Palindrome Checker
// Write a C program that checks if a given string is a palindrome
// It should ignore spaces, punctuation, and be case insensitive


#include <stdio.h>
#include <string.h> // for strlen
#include <ctype.h> // for isalpha and tolower

int main(void) {

    // constant needed for array size
    // typical to use CAPS for constants
    const int MAX = 100;

    // make buffers to hold input and cleaned strings
    char inputString[MAX] = {};
    char processString[MAX] = {};


    // Get input from user using fgets
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);


    // Get the length of the input string safely using strlen
    int lenStr = strlen(inputString);

    // Step 1: Clean the string by removing non-letters and converting to lowercase
    // Hint - use isalpha() and tolower() from ctype.h
    // Loop through each character in the input string
    // and if it is a letter, convert to lowercase and add to cleaned string


    // make certain to null terminate the cleaned string!


    // print the cleaned string for debugging
    printf("Cleaned string: %s\n", processString);

  

    // Check palindrome
    int isPalindrome = 1; // assume it is a palindrome until proven otherwise
    

  // Step 2 Check the new processed string is not empty
  // If it is empty, print a message and then set isPalindrome to 0
  
  // Step 3: If not empty, check if it is a palindrome
  // Check each character from the start and end of the string
  // moving towards the center in each loop iteration
  // If any characters do not match, set isPalindrome to 0 and break the loop



    if (0) // replace 0 with the correct condition
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is NOT a palindrome.\n");
    return 0;
}