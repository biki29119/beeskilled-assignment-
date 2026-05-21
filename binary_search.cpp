#include <iostream>
#include <vector>
using namespace std;

// Iterative Binary Search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

// Print array function
void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    // Test array
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    
    cout << "Sorted array: ";
    printArray(arr);
    cout << endl << endl;
    
    // Get target from user
    int target;
    cout << "Enter number to search: ";
    cin >> target;
    
    int index = binarySearch(arr, target);
    
    if (index != -1) {
        cout << "Found " << target << " at index " << index << endl;
    } else {
        cout << target << " not found in array" << endl;
    }
    
    return 0;
}