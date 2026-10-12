# ELEC2645 Unit 1.2 Activity 6: Debug Practice

This program should read the user's first name, convert it to uppercase and display a welcome message. It should then find the length of the name and calculate the average of the integers from `1` to that length.

Unfortunately, the starter code contains several problems. Some prevent compilation, while others compile but cause incorrect behaviour or unsafe memory access. Happy bug hunting!

## 1. Build the code

```bash
gcc -Wall -Wextra -Wpedantic -fsanitize=address activity6_debug_practice.c -o activity6_debug_practice.out
```

Compiler warnings may point towards problems. AddressSanitizer can also identify some out-of-bounds memory accesses when the program runs.

## 2. The activity

The corrected program should:

- safely read a single first name;
- convert each letter to uppercase using `toupper()`;
- print the greeting, name and status;
- find the length of the name;
- calculate the average of the integers from `1` to the name length;
- print the average to two decimal places.

Try both very short and very long names. Some errors only become obvious with particular input lengths.

The debugger can only start after the program compiles. Fix compilation errors first, then use Run and Debug if the program still behaves incorrectly.

## 3. Test your work

```bash
make test6
```
