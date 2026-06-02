#include <iostream>
using namespace std;

int main() {
    int num, temp, rev = 0, rem;
    
    cout << "Enter a number: ";
    cin >> num;
    
    temp = num;
    
    // Reverse the number
    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    
    if (num == rev)
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is not a Palindrome." << endl;
        
    return 0;
}