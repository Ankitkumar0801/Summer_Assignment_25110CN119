#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

/**
 * Function to check if a number is an Armstrong number.
 * @param num The number to check.
 * @return true if it is an Armstrong number, false otherwise.
 */
bool isArmstrong(int num) {
    if (num < 0) return false; // Armstrong numbers are typically defined for non-negative integers
    
    // Convert to string to easily count digits and iterate
    string sNum = to_string(num);
    int n = sNum.length(); // Order of the number (number of digits)
    
    long long sum = 0;
    for (char c : sNum) {
        int digit = c - '0';
        sum += pow(digit, n);
    }
    
    return sum == num;
}

/**
 * Function to find and print all Armstrong numbers in a given range [low, high].
 * @param low Lower bound of the range (inclusive).
 * @param high Upper bound of the range (inclusive).
 */
void findArmstrongInRange(int low, int high) {
    cout << "Armstrong numbers between " << low << " and " << high << " are: ";
    
    // Handle cases where low > high
    if (low > high) {
        swap(low, high);
    }

    bool found = false;
    for (int i = low; i <= high; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
            found = true;
        }
    }
    
    if (!found) {
        cout << "None found";
    }
    cout << endl;
}

int main() {
    // Example 1: Check a single number
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    // Example 2: Find Armstrong numbers in a range
    int low = 1;
    int high = 10000;
    findArmstrongInRange(low, high);

    return 0;
}   