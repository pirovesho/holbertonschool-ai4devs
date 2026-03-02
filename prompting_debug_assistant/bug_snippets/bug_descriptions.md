##Bug 1 – bug1.py
**Intended Behavior**: Return the last n items of a list.
**Issue Type**: Off-by-one error.
**Notes**: The function fails when n == len(items).

##Bug 2 – bug2.cpp
**Intended Behavior**: Divide each element of an array by a user-provided divisor.
**Issue Type**: Runtime exception.
**Notes**: The program crashes if the user enters 0 as the divisor.

##Bug 3 – bug3.js
**Intended Behavior**: Return the sum of all elements in an array.
**Issue Type**: Off-by-one / loop logic error.
**Notes**: The loop skips the first element and accesses an out-of-bounds element at the end.

##Bug 4 – bug4.java
**Intended Behavior**: Store integers in a list and calculate their sum.
**Issue Type**: Misuse of data types.
**Notes**: Adding strings to an ArrayList causes a compile-time type error.

##Bug 5 – bug5.c
**Intended Behavior**: Print array elements, sum them, and check if a number exists.
**Issue Type**: Off-by-one / undefined behavior.
**Notes**: The loop accesses memory out-of-bounds by using i <= 5 instead of i < 5.