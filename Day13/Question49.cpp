#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter the array length: ";
    cin >> len;

    int arr[len]; 

    cout << "Enter " << len << " elements: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}   