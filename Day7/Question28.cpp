#include <iostream>
using namespace std;

int reverseNumber(int num) {
    static int reversed = 0;
    static int place = 1; // Optional: if you want to reconstruct value correctly for some variations
    
    if (num == 0) {
        return reversed;
    }
    
    int digit = num % 10;
    reversed = reversed * 10 + digit;
    
    return reverseNumber(num / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Entered Number: " << num << endl;
    cout << "Reversed Number: " << reverseNumber(num) << endl;
    return 0;
}   