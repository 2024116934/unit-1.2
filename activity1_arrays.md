# ELEC2645 Unit 1.2 Activity 1: Arrays

Arrays store multiple values of the same type in a single variable. They are useful when working with a collection of data, such as a list of numbers.

An array declaration specifies the type, name and number of elements:

```c
int numbers[5];
```

There are several ways to create and initialise an array:

```c
int array1[5];                    // Empty array: initialise before use
int array2[3] = {1, 2, 3};       // Array with specified values
int array3[10] = {0};            // All elements initialised to zero
int array4[] = {5, 6, 7, 8};     // Size inferred from the values
```

Access individual elements using an index:

```c
numbers[0] = 10;
printf("%d", numbers[0]);
```

Array indices start at `0`. An array of size 5 therefore has indices `0` to `4`.

## 1. Run the code

```bash
gcc activity1_arrays.c -o activity1_arrays.out
./activity1_arrays.out
```

## 2. The activity

Complete `activity1_arrays.c` so that it:

- declares an array of five integers;
- asks the user to enter five numbers;
- stores each number in the array;
- uses another loop to square each element;
- adds the squared values and prints their sum.

Keep the final output in this exact form:

```text
Sum = N
```

## 3. Test your work

```bash
make test1
```
