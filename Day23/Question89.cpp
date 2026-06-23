#include<iostream>
using namespace std;
int firstNonRepeatedElement(int arr[], int n); 

int main(){

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout<<"\nEnter the array elements:\n"; 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"\nFirst non-repeated element is:  ";
    cout<<firstNonRepeatedElement(arr, n);
    cout<<endl;
    return 0;
}
    int firstNonRepeatedElement(int arr[], int n) {
    for(int i = 0; i < n; i++){
        int j;
        for(j = 0; j < n; j++)
            if(i != j && arr[i] == arr[j])
                break;
        if(j == n)
        return arr[i];
    }

    return -1; // Return -1 if no non-repeated element is found
}