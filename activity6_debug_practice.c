// ELEC2645 - Unit 1.2 Debugging Exercise
// This code contains several bugs. Identify and fix them.
// Some bugs may cause compile errors, others may cause runtime issues.


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  
  char name[4];                   // is this size sufficient for input?
  char greeting[6] = 'Hello';     // 
  char status[3] = {'O', 'K','0'};      // another problem here

  printf("Enter your name: ");
  scanf("%s", name);              // is this safe?
   

    // Convert name to uppercase 
    for (int i = 0; i < 5; i++) {  // 
      name[i] = toupper(name[i]);
    }

    
    // print the greeting, name and status

    printf("\n%s there %s!\n", greeting, name);  // greeting init is wrong
    printf("Everything is: %s\n", status);       // prints non-null-terminated "string"


    // Find the length of the name

    int namelen=strlen(name);

    // Average from 1 to namelen

    int sum = 0;
    for (int i = 1; i < namelen; i++) {
        sum = sum + i;
    }
    double avg = sum / namelen;            // remember to cast to double for correct division
    printf("\nAverage score: %.2f\n", avg);

    return 0;
}