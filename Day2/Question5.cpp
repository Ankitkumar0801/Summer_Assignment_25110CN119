#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers by taking absolute value
    if (num < 0) num = -num;

    while (num != 0) {
        sum += num % 10;  // Extract last digit and add to sum
        num /= 10;        // Remove last digit
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}