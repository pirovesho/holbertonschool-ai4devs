# Prompt Testing Examples

## Example 1 – Refactoring Prompt
**Prompt**: Refactor the following Python function for readability and clarity.  
**Input**:
``python
def calc(a,b): return a+b*10

**AI Output**:
def calculate_total(a: int, b: int) -> int:
    """Return a plus b times 10."""
    return a + (b * 10)

**Feedback**: Output is correct and readable. Docstring could be more descriptive about the calculation purpose.


## Example 2 – Style Enforcement Prompt
**Prompt**: Rewrite the following JavaScript code to follow consistent style guidelines.
**Input**:
function sum(x,y){return x+y;}
**AI Output**:
function sum(x, y) {
    return x + y;
}
**Feedback**: Correctly formatted with consistent spacing. Readability improved.


## Example 3 – Error Diagnosis Prompt
**Prompt**: Identify the problem in the following Python code.
**Input**: 
numbers = [1,2,3]
print(numbers[3])
**AI Output**:
IndexError: list index out of range
The code is trying to access the 4th element (index 3) of a list that has only 3 elements.
**Feedback**: Accurate diagnosis, clearly explains why the error occurs.


## Example 4 – Bug Fix Suggestion Prompt
**Prompt**: Fix the following Java code that fails to compile.
**Input**:
ArrayList<Integer> numbers = new ArrayList<>();
numbers.add("10");
**AI Output**:
ArrayList<Integer> numbers = new ArrayList<>();
numbers.add(10);
**Feedback**: Correctly resolves type mismatch. Clear and simple.


## Example 5 – Unit Test Generation Prompt
**Prompt**: Generate unit tests for the following Python function.
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