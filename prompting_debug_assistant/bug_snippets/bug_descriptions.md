## Bug 1 – bug1.py

**Intended Behavior**: The program should take a list of items and a number, then show only the last few items from that list. For example, if the list is [apple, banana, cherry, date, elderberry] and the number is 3, it should display cherry, date, elderberry.
**Issue Type**: Off-by-one error.
**Notes**: The function leaves out the final element, so the returned list is shorter than expected when n equals the list length.

## Bug 2 – bug2.cpp

**Intended Behavior**: The program should ask the user for a number and use it to divide each value in a list, then show the results on the screen. For example, if the list is [10, 20, 30] and the user enters 2, the program should show 5, 10, 15.
**Issue Type**: Runtime exception.
**Notes**: If the user enters 0, the program crashes because division by zero is not handled.

## Bug 3 – bug3.js

**Intended Behavior**: The program should take a list of numbers and add them together to find the total. For example, if the list is [5, 10, 15], it should display 30.
**Issue Type**: Off-by-one / loop logic error.
**Notes**: The loop skips the first number and reads beyond the array, causing incorrect results.

## Bug 4 – bug4.java

**Intended Behavior**: The program should save several whole numbers in a list and then calculate and display their total. For example, if the numbers are 10, 20, 30, it should show Total: 60.
**Issue Type**: Misuse of data types.
**Notes**: Text values are added instead of numbers, causing the program to fail during compilation.

## Bug 5 – bug5.c

**Intended Behavior**: The program should show all numbers in a list, add them together, and check if a chosen number is present. For example, with 1, 2, 3, 4, 5, it should print all numbers, show Sum: 15, and confirm that 3 is in the list.
**Issue Type**: Off-by-one / undefined behavior.
**Notes**: The loop goes past the end of the array, accessing invalid memory and producing unpredictable results.