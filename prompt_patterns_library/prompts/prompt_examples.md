# Prompt Testing Examples

## Example 1 – Refactoring Prompt

**Prompt**: Act like a Senior Developer and refactor the following Python function for readability and clarity.  
**Input Placeholder**: [CODE_BLOCK]  
**Input**:
``python
def calc(a,b): return a+b*10
**AI Output**:
def calculate_total(a: int, b: int) -> int:
    """Return a plus b times 10."""
    return a + (b * 10)
**Feedback**: Output is correct and readable. Docstring could be more descriptive about the calculation purpose.


## Example 2 – Style Enforcement Prompt

**Prompt**: Act like a Code Quality Reviewer and rewrite the following JavaScript code to follow consistent style guidelines.
**Input Placeholder**: [CODE_BLOCK]  
**Input**: function sum(x,y){return x+y;}
**AI Output**:
function sum(x, y) {
    return x + y;
}
**Feedback**: Act like a Debugging Specialist and identify the problem in the following Python code.


## Example 3 – Error Diagnosis Prompt

**Prompt**: Act like a Debugging Specialist and identify the problem in the following Python code.
Input Placeholder: [CODE_BLOCK] + [ERROR_MESSAGE_OR_DESCRIPTION]
**Input**: 
numbers = [1,2,3]
print(numbers[3])
**AI Output**:
IndexError: list index out of range
The code is trying to access the 4th element (index 3) of a list that has only 3 elements.
**Feedback**: Accurate diagnosis, clearly explains why the error occurs.


## Example 4 – Bug Fix Suggestion Prompt

**Prompt**: Act like a Software Debugging Expert and fix the following Java code that fails to compile.
**Input Placeholder**: [BUGGY_CODE]  
**Input**:
ArrayList<Integer> numbers = new ArrayList<>();
numbers.add("10");
**AI Output**:
ArrayList<Integer> numbers = new ArrayList<>();
numbers.add(10);
**Feedback**: Correctly resolves type mismatch. Clear and simple.


## Example 5 – Unit Test Generation Prompt

**Prompt**: Act like a Software Testing Engineer and generate unit tests for the following Python function.
**Prompt**: Generate unit tests for the given [LANGUAGE] function or module. 
**Input**:
def multiply(a, b):
    return a * b
**AI Output**:
import unittest

class TestMultiply(unittest.TestCase):
    def test_positive_numbers(self):
        self.assertEqual(multiply(2, 3), 6)

    def test_zero(self):
        self.assertEqual(multiply(0, 5), 0)

    def test_negative_numbers(self):
        self.assertEqual(multiply(-2, 3), -6)

if __name__ == "__main__":
    unittest.main()
**Feedback**: Tests cover normal, zero, and negative cases. Well-structured and ready to use.


## Example 6 – Comment Generation Prompt

**Prompt**: Add meaningful comments to the following C++ function.
**Prompt**: Add meaningful comments to the given [LANGUAGE] code. 
**Input**:
int sum(int a, int b) { return a + b; }
**AI Output**:
// Function to calculate the sum of two integers
// Parameters:
//   a - first integer
//   b - second integer
// Returns:
//   Sum of a and b
int sum(int a, int b) {
    return a + b;
}
**Feedback**: Comments are clear, concise, and effectively explain the function purpose.