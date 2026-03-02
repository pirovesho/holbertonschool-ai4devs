## Bug 1 – bug1.py

**AI Diagnosis**: range(-n, -1) excludes the last element of the list because range stops before the end value.
**Suggested Fix**: Use 0 instead of -1 to include the last element.
**Alternative Fixes Tested**: None.  
**Result**: Fix works as expected.  

## Bug 2 – bug2.cpp

**AI Diagnosis**: The program does not check if the divisor is zero before dividing, which causes a runtime crash when the user enters 0.
**Suggested Fix**: Add a check to prevent division by zero. 
**Alternative Fixes Tested**: None.  
**Result**: Fix works as expected.  

## Bug 3 – bug3.js

**AI Diagnosis**: The loop incorrectly starts at 1 instead of 0 and uses <= arr.length instead of < arr.length, causing it to skip the first number and attempt to access an element outside the array.
**Suggested Fix**: Change the loop to start at index 0 and stop before arr.length so that all elements are included and no out-of-bounds access occurs.
**Alternative Fixes Tested**: None.  
**Result**: Fix works as expected.   

## Bug 4 – bug4.java

**AI Diagnosis**: The program tries to store numbers in an ArrayList<Integer> but uses strings ("10", "20", "30") instead of integers.
**Suggested Fix**: Store actual integers in the list instead of strings.
**Alternative Fixes Tested**: None.  
**Result**: Fix works as expected.  

## Bug 5 – bug5.c

**AI Diagnosis**: The program uses a loop condition i <= 5 to iterate through an array of 5 elements (arr[5]).
**Suggested Fix**: Change the loop condition to stop before the array size by using < 5 instead of <= 5.
**Alternative Fixes Tested**: None.  
**Result**: Fix works as expected.  