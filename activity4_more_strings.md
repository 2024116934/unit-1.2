# ELEC2645 Unit 1.2 Activity 4: More Strings

This activity develops string manipulation in C. The program reads a line of text, removes non-letter characters, converts the remaining letters to lowercase and checks whether the cleaned string is a palindrome.

A **palindrome** reads the same forwards and backwards. For example, `tacocat`, `taco cat` and `taco123cat` all become `tacocat` after cleaning.

We will use:

- `isalpha()` from `<ctype.h>` to check whether a character is a letter;
- `tolower()` from `<ctype.h>` to convert letters to lowercase;
- `strlen()` from `<string.h>` to find the length of a null-terminated string.

Cleaning the input first makes the palindrome check much simpler.

## 1. Run the code

```bash
gcc activity4_more_strings.c -o activity4_more_strings.out
./activity4_more_strings.out
```

## 2. The activity

Follow the steps in the starter code:

1. Read the input using `fgets()`.
2. Copy only letters to `processString`, converting them to lowercase.
3. Add the terminating `'\0'` to the cleaned string.
4. Check that the cleaned string is not empty.
5. Compare characters from the two ends, moving towards the centre.

For a cleaned string of length `n`, compare index `0` with `n - 1`, index `1` with `n - 2`, and so on. Stop as soon as a pair does not match.

## 3. Test your work

```bash
make test4
```
