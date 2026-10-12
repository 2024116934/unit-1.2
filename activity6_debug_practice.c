// ELEC2645 - Unit 1.2 Debugging Exercise
// This code contains several bugs. Identify and fix them.
// Some bugs may cause compile errors, others may cause runtime issues.


#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
  
  char name[5];                   // Bug1: increased size from 4 → 5, reserve space for null terminator '\0'
  char greeting[6] = "Hello";     // Bug2: use double quotes for string literal (single quotes only for single char)
  char status[4] = {'O', 'K','0', '\0'}; // Bug3: add null terminator at end for valid C string

  printf("Enter your name: ");
  scanf("%4s", name);             // Bug4: limit input length to prevent buffer overflow

  // Convert name to uppercase
  int namelen = strlen(name);     // Bug5: use actual string length instead of fixed i<5
  for (int i = 0; i < namelen; i++) {
    name[i] = toupper(name[i]);
  }
  
  // print the greeting, name and status
  printf("\n%s there %s!\n", greeting, name);
  printf("Everything is: %s\n", status);
  // Find the length of the name

  // Average from 1 to namelen
  int sum = 0;
  for (int i = 1; i <= namelen; i++) {  // Bug6: use <=, include namelen in sum
      sum = sum + i;
  }
  double avg = (double)sum / namelen;    // Bug7: cast sum to double to avoid integer division
  printf("\nAverage score: %.2f\n", avg);
  return 0;
}

