#include <iostream>
#include <unordered_map>
#include <vector>

int findMostFrequent(const std::vector<int>& arr) {
    if (arr.empty()) return -1; // Handle empty array

    std::unordered_map<int, int> freqMap;
    int maxCount = 0;
    int result = arr[0];

    for (int num : arr) {
        freqMap[num]++;
        if (freqMap[num] > maxCount) {
            maxCount = freqMap[num];
            result = num;
        }
    }
    return result;
}

int main() {
    std::vector<int> arr = {1, 4, 4, 4, 2, 1};
    std::cout << "Most frequent element: " << findMostFrequent(arr) << std::endl;
    return 0;
}   