#include <iostream>
#include <unordered_set>
using namespace std;

void findPair(int arr[], int n, int target) {
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << complement << ", " << arr[i] << ")" << endl;
            return;
        }
        seen.insert(arr[i]);
    }
    cout << "No pair found." << endl;
}

int main() {
    int arr[] = {10, 6, 2, 4, 3, 1};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    findPair(arr, n, target);
    return 0;
}   