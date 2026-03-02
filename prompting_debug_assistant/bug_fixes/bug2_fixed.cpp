#include <iostream>
#include <vector>
using namespace std;

void divideElements(vector<int> nums, int divisor) {
    if(divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return;
    }
    for(int i = 0; i < nums.size(); i++) {
        cout << "Element " << i << " divided by " << divisor << " is " << nums[i] / divisor << endl;
    }
}

int main() {
    vector<int> values = {10, 20, 30, 40, 50};
    int divisor;

    cout << "Enter a divisor: ";
    cin >> divisor;

    divideElements(values, divisor);

    return 0;
}