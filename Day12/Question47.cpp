#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << a << " " << b << " "; // Print first two numbers

    for (int i = 2; i < n; i++) {  
        next = a + b;  // Sum of previous two numbers
        cout << next << " ";
        a = b;  // Update values for next iteration
        b = next;
    }

    return 0;
}