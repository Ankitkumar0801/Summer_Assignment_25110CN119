#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << (char)('A' + j);
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << (char)('A' + j);
        }

        cout << endl;
    }
    return 0;
}   