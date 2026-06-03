#include <iostream>
#include <numeric> // For std::gcd in C++17, or implement manually

// Function to calculate GCD using Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    // Use division first to prevent potential overflow
    return (a / gcd(a, b)) * b;
}

int main() {
    long long num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "LCM is: " << lcm(num1, num2) << std::endl;
    return 0;
}   