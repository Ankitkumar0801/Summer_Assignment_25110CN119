#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int cnt = 0;

        for (auto &it : ans) {
            if (arr[i] == it) {
                cnt++;
                break;
            }
        }

        if (cnt) continue;

        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]){
                cnt++;
                break;
            }
        }

        if (cnt) ans.push_back(arr[i]);
    }

    return ans;
}

int main() {

    vector<int> arr = {2, 3, 1, 2, 3};
    vector<int> res = findDuplicates(arr);
    for (int ele : res) {
        cout << ele << ' ';
    }
    cout << endl;

    return 0;
}