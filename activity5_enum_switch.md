# ELEC2645 Unit 1.2 Activity 5: Enum and Switch

This activity introduces two C features that are often useful together: `enum` and `switch`.

An `enum` defines a set of named integer constants. Meaningful names make code easier to read than remembering that one number means fail and another means pass:

```c
enum Noodles { NOODLE_SOBA, NOODLE_UDON, NOODLE_RAMEN };
enum Noodles dish = NOODLE_SOBA;
```

A `switch` selects a block of code based on a value:

```c
switch (dish) {
    case NOODLE_SOBA:
        printf("I love soba\n");
        break;
    case NOODLE_UDON:
        printf("Kitsune udon is excellent\n");
        break;
    case NOODLE_RAMEN:
        printf("Tonkotsu is my favourite\n");
        break;
}
```

The `break` statement prevents execution continuing into the next case.

## 1. Run the code

```bash
gcc activity5_enum_switch.c -o activity5_enum_switch.out
./activity5_enum_switch.out
```

## 2. The activity

Complete the grade checker using these bands:

- `0` to `49`: `Grade: Fail :(`
- `50` to `59`: `Grade: Pass :|`
- `60` to `69`: `Grade: Merit :)`
- `70` to `100`: `Grade: Distinction :D`
- below `0` or above `100`: `Invalid grade :?`

First complete the `enum` and `if...else` chain so `currentGrade` is assigned for every possible input. Then complete the `switch` statement to print the exact output for that grade.

## 3. Test your work

```bash
make test5
```
