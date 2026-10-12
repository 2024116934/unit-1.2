# ELEC2645 Unit 1.2 Activity 3: Strings

In C, a **string** is a sequence of characters stored in a `char` array. It ends with a special null character, written as `'\0'`, which marks the end of the string.

A single word can be read using `scanf()`, but the width limit must leave room for the null character:

```c
char name[5];
scanf("%4s", name);
```

`scanf("%s", ...)` stops at whitespace, so use `fgets()` when the input may contain spaces:

```c
char buffer[100];
fgets(buffer, sizeof(buffer), stdin);
```

This activity introduces basic string handling by asking you to count the vowels in a line of text.

## 1. Run the code

```bash
gcc activity3_strings.c -o activity3_strings.out
./activity3_strings.out
```

## 2. The activity

Build the solution in stages:

1. Read one lowercase word and count its vowels.
2. Loop through the string until the null character is reached.
3. Use `tolower()` from `<ctype.h>` to handle uppercase letters.
4. Replace `scanf()` with `fgets()` to support spaces.

For example, `hello`, `HELLO` and `He llo` should all produce:

```text
Number of vowels: 2
```

Keep the final `printf()` text unchanged so ELEC2645 Bot can check it.

## 3. Test your work

```bash
make test3
```
