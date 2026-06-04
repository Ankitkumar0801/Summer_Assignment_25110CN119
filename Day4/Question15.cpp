#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isArmstrong(int num) {
    
    if (num < 0) return false;
    
    string strNum = to_string(num);
    int n = strNum.length(); 
    int sum = 0;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}   