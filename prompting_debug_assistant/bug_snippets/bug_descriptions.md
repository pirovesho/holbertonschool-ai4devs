## Bug 1 – bug1.py

**Intended Behavior**: When given a list and a number n, the function should return the last n items from the list. For example, if the list is [1, 2, 3, 4, 5] and n = 3, the result should be [3, 4, 5].
**Issue Type**: Off-by-one error.
**Notes**: The function leaves out the final element, so the returned list is shorter than expected when n equals the list length.

## Bug 2 – bug2.cpp

**Intended Behavior**: The program should ask the user for a number and divide each value in the list by that number. For example, if the list is [10, 20, 30] and the user enters 2, the output should be 5, 10, 15.
**Issue Type**: Runtime exception.
**Notes**: If the user enters 0, the program crashes because division by zero is not handled.

## Bug 3 – bug3.js

**Intended Behavior**: The function should add together all numbers in an array and return the total. For example, if the array is [5, 10, 15], the result should be 30.
**Issue Type**: Off-by-one / loop logic error.
**Notes**: The loop skips the first number and reads beyond the array, causing incorrect results.

## Bug 4 – bug4.java

**Intended Behavior**: The program should store whole numbers in a list and calculate their total. For example, if the list contains 10, 20, 30, the program should display Total: 60.
**Issue Type**: Misuse of data types.
**Notes**: Text values are added instead of numbers, causing the program to fail during compilation.

## Bug 5 – bug5.c

**Intended Behavior**: The program should display each number in the array, calculate their sum, and check if a specific value exists. For example, for the array {1, 2, 3, 4, 5}, it should print all numbers, show Sum: 15, and confirm that 3 is in the array.
**Issue Type**: Off-by-one / undefined behavior.
**Notes**: The loop goes past the end of the array, accessing invalid memory and producing unpredictable results.