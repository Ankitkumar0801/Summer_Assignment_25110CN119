#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;


    if (rows > 26) {
        cout << "Please enter a number between 1 and 26." << endl;
        return 1;
    }

    for (int i = 1; i <= rows; i++) {

        char ch = 'A' + i - 1;
        
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}   