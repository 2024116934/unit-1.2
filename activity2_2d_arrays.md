# ELEC2645 Unit 1.2 Activity 2: 2D Arrays

Arrays can have two or more dimensions. A 2D array is arranged in rows and columns:

```c
char letters[2][3] = {
    {'a', 'b', 'c'},
    {'d', 'e', 'f'}
};
```

The first index selects the row and the second selects the column. As with 1D arrays, indexing starts at `0`.

The `sizeof` operator reports how many bytes a variable occupies:

- `sizeof(array)` gives the size of the whole array;
- `sizeof(array[0])` gives the size of one row;
- `sizeof(array[0][0])` gives the size of one element.

`sizeof` returns a type called `size_t`. We will use `int` for these calculations for now because the arrays are small and the Codespace environment is controlled.

## 1. Run the code

```bash
gcc activity2_2d_arrays.c -o activity2_2d_arrays.out
./activity2_2d_arrays.out
```

## 2. The activity

The program already initialises a 3-by-4 array. Complete the calculations so it prints:

- the total size of the array;
- the number of rows and columns;
- the element in the second row and third column;
- the sum of all elements;
- the average of all elements.

Use nested loops to visit every element when calculating the sum.

## 3. Test your work

```bash
make test2
```
