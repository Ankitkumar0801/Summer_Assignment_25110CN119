#include <iostream>
#include <vector>


int linearSearch(const std::vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    std::vector<int> data = {10, 25, 30, 45, 50};
    int target = 30;

    int result = linearSearch(data, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}   