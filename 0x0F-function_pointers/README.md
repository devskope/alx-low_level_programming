
# 0x0F C - function_pointers

- [x] **0-print_name**
- Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

- [x] **1-array_iterator**
- Write a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- where `size` is the size of the array and `action` is a pointer to the function you need to use

- [x] **2-int_index**
- Write a function that searches for an integer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- where `size` is the number of elements in the array array
- `cmp` is a pointer to the function to be used to compare values
- `int_index `returns the index of the first element for which the `cmp`  function does not return 0
- If no element matches, return `-1`
- If `size` <= `0`, return `-1`

- [x] **3-simple-ops**
- Write a program that performs simple operations.

- [x] **3-simple-ops**
- Write a program that prints the opcodes of its own main function.
  - Usage: `./main number_of_bytes`
  - Output format:
    - the opcodes should be printed in hexadecimal, lowercase
    - each opcode is two char long
    - listing ends with a new line
