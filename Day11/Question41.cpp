#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    // Call the function and print the result
    cout << "The sum is: " << sum(a, b) << endl;
    
    return 0;
}   