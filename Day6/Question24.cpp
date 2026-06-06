#include <iostream>

using namespace std;

double calculatePowerIterative(double x, int n) {
    double result = 1.0;
    
    long long absN = abs((long long)n); 
    
    for (int i = 0; i < absN; i++) {
        result *= x;
    }
    
    if (n < 0) {
        return 1.0 / result;
    }
    
    return result;
}

int main() {
    double x;
    int n;
    
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter integer exponent (n): ";
    cin >> n;
    
    if (x == 0 && n == 0) {
        cout << "0^0 is mathematically undefined, but often treated as 1." << endl;
    }
    
    double ans = calculatePowerIterative(x, n);
    cout << x << "^" << n << " = " << ans << endl;
    
    return 0;
}
