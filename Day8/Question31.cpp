#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Convert integer j to corresponding ASCII character
            // 'A' is 65. So, 1->'A', 2->'B', etc.
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}   