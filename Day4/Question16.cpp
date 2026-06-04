#include <iostream>
#include <cmath>

using namespace std;


int getOrder(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}


bool isArmstrong(int num) {
    int order = getOrder(num);
    int temp = num;
    int sum = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, order);
        temp /= 10;
    }
    
    return (sum == num);
}

int main() {
    int start, end;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    
    if (start > end) {
        swap(start, end);
    }

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";
    
    bool found = false;
    for (int i = start; i <= end; i++) {
        
        if (i < 0) continue;
        
        if (isArmstrong(i)) {
            cout << i << " ";
            found = true;
        }
    }
    
    if (!found) {
        cout << "None";
    }
    
    cout << endl;
    return 0;
}   