#include <iostream>
using namespace std;

int main() {
    int num, range;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;

    for (int i = 1; i <= range; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}