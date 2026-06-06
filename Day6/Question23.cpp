#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    unsigned int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number of set bits in " << n
         << " is " << countSetBits(n);
    return 0;
}
