## Bug Report – bug1.py

- **Summary**: Off-by-one error when selecting the last elements of a list.
- **Root Cause**: The loop used range(-n, -1), which excluded the last element.
- **Resolution**: Replaced the loop with items[-n:] to correctly include all last elements.
- **Lesson Learned**: Always verify loop boundaries and test cases where n equals the list length.

## Bug Report – bug2.cpp

- **Summary**: Program crashes when dividing by zero.
- **Root Cause**: No validation was performed on the user’s input before division.
- **Resolution**: Added a check to prevent division when the divisor is zero.
- **Lesson Learned**: User input should always be validated before performing risky operations.

## Bug Report – bug3.js

- **Summary**: Incorrect sum calculation due to loop boundary errors.
- **Root Cause**: The loop started at index 1 and ran until arr.length, causing skipped and invalid accesses.
- **Resolution**: Updated the loop to start at 0 and stop at arr.length - 1.
- **Lesson Learned**: Understand how array indexing works and avoid off-by-one mistakes.

## Bug Report – bug4.java

- **Summary**: Program fails to compile due to incorrect data types.
- **Root Cause**: Strings were added to an ArrayList<Integer> instead of integers.
- **Resolution**: Replaced string values with integer values when adding elements.
- **Lesson Learned**: Always match data types with collection definitions in strongly typed languages.

 ## Bug Report – bug5.c

- **Summary**: Program accesses invalid memory when iterating through an array.
- **Root Cause**: Loop condition used i <= 5 instead of i < 5, causing out-of-bounds access.
- **Resolution**: Changed loop conditions to stop before reaching the array limit.
- **Lesson Learned**: Array boundaries must be respected to avoid undefined behavior.