## Bug 1 – bug1.py

**Intended Behavior**: Given a list and a number n, the function should return exactly the last n elements in their original order, including the final element of the list.
**Issue Type**: Off-by-one error.
**Notes**: The loop excludes the last element, causing the returned list to be one item short when n equals the list length.

## Bug 2 – bug2.cpp

**Intended Behavior**: The program should safely divide each element in the vector by a user-provided number and display valid results for all inputs.
**Issue Type**: Runtime exception.
**Notes**: No validation is performed on the divisor, so entering 0 causes a division-by-zero crash.

## Bug 3 – bug3.js

**Intended Behavior**: The function should iterate through every element of the array and compute the total sum accurately.
**Issue Type**: Off-by-one / loop logic error.
**Notes**: The loop starts at the wrong index and exceeds array bounds, leading to skipped values and undefined access.

## Bug 4 – bug4.java

**Intended Behavior**: The program should store numeric values in a typed list and correctly compute their sum using integer arithmetic.
**Issue Type**: Misuse of data types.
**Notes**: String values are inserted into an Integer list, causing a compilation failure due to type mismatch.

## Bug 5 – bug5.c

**Intended Behavior**: The program should iterate through all valid elements of the array, print each value, calculate the correct total sum, and determine whether a specific target number exists in the array, without accessing memory outside the array bounds.
**Issue Type**: Off-by-one / undefined behavior.
**Notes**: The loop condition allows access beyond the valid array range, resulting in unpredictable behavior.