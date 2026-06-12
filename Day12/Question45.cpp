#include <iostream>
using namespace std;

bool checkPalindrome(int num) {
    int original = num, reversed = 0, remainder;

    while (num > 0) { 
        remainder = num % 10; // Extract last digit
        reversed = reversed * 10 + remainder; // Create reversed number
        num /= 10; // Remove last digit
    }

    return original == reversed; // Check if both are equal
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (checkPalindrome(num)) {
        cout << "It is a Palindrome.";
    } else {
        cout << "It is not a Palindrome.";
    }

    return 0;
}