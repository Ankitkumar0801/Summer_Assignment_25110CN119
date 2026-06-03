#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int startNum, endNum;
    cout << "Enter START of Range: ";
    cin >> startNum;
    cout << "Enter END of Range: ";
    cin >> endNum;

    cout << "Prime Numbers: ";
    for (int i = startNum; i <= endNum; i++) {
        bool isPrime = true;
        if (i < 2) isPrime = false;
        else {
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}   