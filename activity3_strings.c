// ELEC2645 Unit 1.2 Activity 3 - Strings
//
// Write code to read input from a user and then count 
// the number of vowels in the message

#include <stdio.h>
#include <ctype.h> // for tolower()

int main(void) {

    char buffer[100]; // input buffer, large enough to hold the expected inputs
    int count = 0; 

    // Step 1: Ask user for input - can start simple with scanf("%N",str), but fgets is safer
    printf("Enter a string: ");
    
    
    // Step 2: Loop through the string and count the vowels.
    // Use tolower() so uppercase and lowercase vowels are handled together.

    // Step 3: Handle spaces by using fgets() instead of scanf().

    // Please don't modify the bit in the "" - ELEC2645 bot isnt that smart! 

    printf("\nNumber of vowels: %d\n", -1); // replace -1 with the actual count
    return 0;
}