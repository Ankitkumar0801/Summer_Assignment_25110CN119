#include <iostream>
using namespace std;

int main() {
    int num, product = 1;
    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers by taking absolute value
    if (num < 0) num = -num;

    while (num > 0) {
        product *= num % 10; // Multiply last digit to product
        num /= 10;           // Remove last digit
    }

    cout << "Product of digits: " << product << endl;
    return 0;
}